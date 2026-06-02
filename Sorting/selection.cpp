#include <bits/stdc++.h>
using namespace std;
void selectionSort(int n, int arr[]){
    for(int i=0; i<=n-2; i++){
        int min = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[min]) min = j;
        }
        swap(arr[min], arr[i]);
    }
}
int main(){
    int arr1[6]={13, 46, 24, 52, 20, 9};
    for(int i=0; i<6; i++) cout<<arr1[i]<<" ";
    cout<<endl;
    selectionSort(6, arr1);
    for(int i=0; i<6; i++) cout<<arr1[i]<<" ";
}