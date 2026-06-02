#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int n, int arr[]){
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}
int main(){
    int arr1[6]={13, 46, 24, 52, 20, 9};
    for(int i=0; i<6; i++) cout<<arr1[i]<<" ";
    cout<<endl;
    bubbleSort(6, arr1);
    for(int i=0; i<6; i++) cout<<arr1[i]<<" ";
}
 