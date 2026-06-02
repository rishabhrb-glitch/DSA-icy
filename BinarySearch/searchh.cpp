//search in rotated sorted array
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &v, int n, int target){
    int l=0;
    int h=n-1;
    while(l <= h){
        int m = (l+h)/2;
        if(v[m]==target) return m;
        else if(v[l] <= v[m]){
            if(target >= v[l] && target <= v[m]){
                h = m-1;
            }
            else l = m+1;
        }
        else{
            if(target >= v[m] && target <= v[h]){
                l = m+1;
            }
            else{
                h = m-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> v={4,5,6,7,0,1,2};
    int n=7;
    int target=1;
    cout<<search(v, n, target);
}