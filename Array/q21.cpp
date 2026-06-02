//next permutation
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,1,5,4,3,0,0};
    int n=7;
    int ind=-1;
    for(int i=n-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            ind = i;
            break;
        }
    }
    if(ind==-1){
        reverse(arr.begin(), arr.end());
    }
    for(int i=n-1; i>=ind; i--){
        if(arr[i] > arr[ind]){
            swap(arr[i], arr[ind]);
            break;
        }
    }
    reverse(arr.begin()+ind+1, arr.end());
    for(auto it : arr) cout<<it<<" ";
}