#include <bits/stdc++.h>
using namespace std;

//ceil -- same as lower bound

int floorEl(int arr[], int n, int x){
    int l=0;
    int h=n-1;
    int ans = -1;
    while(l <= h){
        int m = (l + h)/2;
        if(arr[m] <= x){
            ans = m;
            l = m + 1;
        }
        else h = m - 1;
    }
}

int main(){
    
}