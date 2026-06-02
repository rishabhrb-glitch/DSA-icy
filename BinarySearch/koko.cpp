//s = no. of hours
//k = bananas can be eaten per hour
#include <bits/stdc++.h>
using namespace std;

int findK(int arr[], int n, int s){
    int l=1;
    int h=n-1;
    while(l <= h){
        int m=(l+h)/2;
        int ans = 0;
        for(int i=0; i<n; i++){
            ans = ans + ceil(arr[i]/m);
        }
        if(ans <= s){
            ans = m;
            h = m-1;
        }
        else{
            l = m+1;
        }
    }
    return l;
}

int main(){
    int arr[]={3,6,7,11};
    int s=8;
    cout<<findK(arr, 4, s);
}