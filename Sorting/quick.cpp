#include <bits/stdc++.h>
using namespace std;

int f(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high-1) i++;
        while(arr[j] > pivot && j >= low+1) j--;
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[low]);
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pIndex = f(arr, low, high);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high);
    }
}

int main(){
    int arr1[6]={13, 46, 24, 52, 20, 9};
    for(int i=0; i<6; i++) cout<<arr1[i]<<" ";
    cout<<endl;
    quickSort(arr1, 0, 5);
    for(int i=0; i<6; i++) cout<<arr1[i]<<" ";
}
 