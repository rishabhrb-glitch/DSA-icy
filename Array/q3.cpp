//check if array is sorted
#include <bits/stdc++.h>
using namespace std;
int isSorted(vector<int> &v, int n){
    for(int i=1; i<n; i++){
        if(v[i] < v[i-1]) return false;
    }
    return true;
}
int main(){
    vector<int> v = {1,2,3,4,5};
    cout<<isSorted(v, 5);
}