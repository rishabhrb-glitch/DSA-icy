#include <bits/stdc++.h>
using namespace std;

int nthRoot(int n, int x){
    int l = 1;
    int h = x;
    int ans = 1;
    while(l <= h){
        int m = (l+h)/2;
        if(pow(m, n) <= x){
            ans = m;
            l = m + 1;
        }
        else{
            h = m-1;
        }
    }
    return ans;
}

int main(){
    int n, x;
    cin>>n>>x;
    cout<<nthRoot(n, x);
}