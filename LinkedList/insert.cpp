#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

Node* insertHead(Node* head, int val){
    return new Node(val, head);
}

Node* insertTail(Node* head, int val){
    if(head == NULL) return new Node(val);
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    Node* newNode = new Node(val);
    temp -> next = newNode;
    return head;
}

Node* insertK(Node* head, int k, int val){
    if(head == NULL){
        if(k == 1) return new Node(val);
        else return head;
    }
    if(k==1) return new Node (val, head);
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt==(k-1)){
            Node* x = new Node (val, temp -> next);
            temp -> next = x;
            break;
        }
        temp = temp -> next;
    }
    return head;
}

Node* insertBefore(Node* head, int el, int val){
    if(head == NULL) return NULL;
    if(head -> data == val){
        return new Node(el, head);
    }
    Node* temp = head;
    while(temp -> next != NULL){
        if(temp -> next -> data == val){
            Node* x = new Node(el, temp -> next);
            temp -> next = x;
            break;
        }
        temp = temp -> next;
    }
    return head;
}

int main(){
    vector<int> v={12,5,6,4,3,99};
    Node* head = convertArr2LL(v);
    //head = insertHead(head, 5);
    //head = insertTail(head, 77);
    //head = insertK(head, 4, 81);
    //head = insertBefore(head, 33, 99);
    Node* temp = head;
    while(temp){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
}