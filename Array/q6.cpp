//left rotate by k places
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    int n=7;
    int d = 3;
    reverse(v.begin(), v.begin()+d);
    reverse(v.begin()+d, v.end());
    reverse(v.begin(), v.end());
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
}