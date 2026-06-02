#include <bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    int l=1;
    int h=n;
    int ans = 1;
    while(l <= h){
        int m = (l + h)/2;
        if((m*m) <= n){
            ans = m;
            l = m+1;
        }
        else{
            h = m-1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<squareRoot(n);
}