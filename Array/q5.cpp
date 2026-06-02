//left rotate by on place
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n = 5;
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}