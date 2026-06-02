//minimum in rotated sorted array
#include <bits/stdc++.h>
using namespace std;

int f(int arr[], int n){
    int l=0;
    int h=n-1;
    int ans = INT_MAX;
    while(l <= h){
        int m=(l+h)/2;
        if(arr[l] <= arr[m]){
            ans = min(ans, arr[l]);
            l = m+1;
        }
        else{
            ans = min(ans, arr[m]);
            h = m-1;
        }
    }
    return ans;
}

int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=7;
    cout<<f(arr, n);
}