//remove duplicates from sorted array
#include <bits/stdc++.h>
using namespace std;
int removeDup(int arr[], int n){
    //using two pointers
    int start=0;
    int end=1;
    for(int i=0; i<n; i++){
        if(arr[end] == arr[start]) end++;
        else{
            arr[start+1]=arr[end];
            start++;
        }
    }
    return (start+1);
}
int main(){
    int arr[]={1,1,2,2,3,3};
    cout<<removeDup(arr, 6);
}