//intersection of sorted arrays
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr1[] = {1,1,2,3,4,5};
    int n=6;
    int arr2[] = {1,1,4,6,7,11};
    int m=6;
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]) i++;
        else if(arr1[i] > arr2[j]) j++;
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(auto it : ans) cout<<it<<" ";
}