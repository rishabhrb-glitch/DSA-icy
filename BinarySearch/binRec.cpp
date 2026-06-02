//binary search recursive
#include <bits/stdc++.h>
using namespace std;

int binaryFn(int arr[], int low, int high, int target){
    if(low > high) return -1;
    int mid = (low + high)/2;
    if(arr[mid]==target) return mid;
    else if(target > arr[mid]){
        return binaryFn(arr, mid+1, high, target);
    }
    else return binaryFn(arr, low, mid-1, target);
}

int main(){
    int arr[]={3,4,6,7,9,12,17};
    cout<<binaryFn(arr, 0, 7, 6);
}