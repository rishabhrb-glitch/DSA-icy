//binary search iterative
#include <bits/stdc++.h>
using namespace std;

int binaryFn(int arr[], int n, int target){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid]==target) return mid;
        else if(target > arr[mid]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}

int main(){
    int arr[]={3,4,6,7,9,12,16,17};
    cout<<binaryFn(arr, 8, 6);
}