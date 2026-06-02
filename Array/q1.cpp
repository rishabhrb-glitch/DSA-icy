//largest element in an array
#include <bits/stdc++.h>
using namespace std;
int lEl(int arr[], int n){
    int large = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > large) large = arr[i];
    }
    return large;
}
int main(){
    int arr[]={3,2,1,5,2};
    cout<<lEl(arr, 5);
}