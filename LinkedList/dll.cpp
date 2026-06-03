#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* array2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}

Node* deleteHead(Node* head){
    Node* temp = head;
    head = head -> next;
    head -> back = NULL;
    temp -> next == NULL;
    free(temp);
    return head;
}

Node* deleteTail(Node* head){
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> back -> next = NULL;
    temp -> back = NULL;
    free(temp);
    return head;
}

Node* deleteK(Node* head, int k){
    if(head == NULL) return NULL;
    int cnt = 0;
    Node* kNode = head;
    while(kNode != NULL){
        cnt++;
        if(cnt == k) break;
        kNode = kNode -> next;
    }
    Node* prev = kNode -> back;
    Node* front = kNode -> next;
    if(prev == NULL && front == NULL) return NULL;
    else if(prev == NULL) return deleteHead(head);
    else if(front == NULL) return deleteTail(head);
    prev -> next = front;
    front -> back = prev;

    kNode -> next = nullptr;
    kNode -> back = nullptr;
    delete kNode;

    return head;
}

Node* insertHead(Node* head, int val){
    return new Node (val, head, nullptr);
}

Node* insertTail(Node* head, int val){
    if(head -> next == NULL) return insertHead(head, val);
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }    
    Node* newNode = new Node (val, nullptr, temp);
    temp -> next = newNode;
    return head;
}

Node* insertK(Node* head, int k){
    
}

int main(){
    vector<int> v={12,6,99,2};
    Node* head = array2DLL(v);

    //head = deleteHead(head);
    //head = deleteTail(head);
    //head = deleteK(head, 3);
    //head = insertHead(head, 78);
    //head = insertTail(head, 76);


    Node* temp = head;
    while(temp){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
}