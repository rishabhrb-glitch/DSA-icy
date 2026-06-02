//rearrange by sign
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,1,-2,-5,2,-4};
    int n=6;
    vector<int> ans(n);
    int posIndex = 0;
    int negIndex = 1;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            ans[negIndex]=arr[i];
            negIndex += 2;
        }
        else{
            ans[posIndex]=arr[i];
            posIndex += 2;
        }
    }
    for(auto it : ans) cout<<it<<" ";
}