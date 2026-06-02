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
    int ans[]={2,4,6,8,8,8,11,13};
    cout<<lowerBound(ans, 8, 8)<<","<<upperBound(ans, 8, 8)-1;
}