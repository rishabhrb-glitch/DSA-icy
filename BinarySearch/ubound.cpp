#include <bits/stdc++.h>
using namespace std;

int upperBound(int arr[], int n, int x){
    int l = 0;
    int h = n-1;
    int ans = n;
    while(l <= h){
        int m = (l + h)/2;
        if(arr[m] > x){
            ans = m;
            h = m-1;
        }
        else l = m + 1;
    }
    return ans;
}

int main(){
    int arr[]={2,3,6,7,8,8,11,11,11,12};
    int x = 11;
    int n = 10;
    cout<<upperBound(arr, n, x);
}