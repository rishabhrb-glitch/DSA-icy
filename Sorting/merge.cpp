#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low >= high) return;
    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    int arr1[6]={13, 46, 24, 52, 20, 9};
    for(int i=0; i<6; i++) cout<<arr1[i]<<" ";
    cout<<endl;
    mergeSort(arr1, 0, 5);
    for(int i=0; i<6; i++) cout<<arr1[i]<<" ";
}
 