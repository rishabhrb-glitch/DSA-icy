#include <bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int n, int x){
    int l = 0;
    int h = n-1;
    int ans = n;
    while(l <= h){
        int m = (l + h)/2;
        if(arr[m] >= x){
            ans = m;
            h = m-1;
        }
        else l = m + 1;
    }
    return ans;
}

int main(){
    int arr[]={1,2,3,3,7,8,9,9,9,11};
    int x = 9;
    int n = 10;
    cout<<lowerBound(arr, n, x);
}