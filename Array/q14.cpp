//longest subarray with given sum (+ve)
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,1,1,1,1,4,2,3};
    int n=10;
    int k = 3;
    int l = 0;
    int r = 0;
    long long sum = arr[0];
    int maxLength = 0;
    while(r < n){
        while(l <= r && sum > k){
            sum -= arr[l];
            l++;
        }
        if(sum == k){
            maxLength = max(maxLength, r-l+1);
        }
        r++;
        if(r < n) sum += arr[r];
    }
    cout<<maxLength;
}