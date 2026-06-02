//2 sum
#include <bits/stdc++.h>
using namespace std;

int usingHash(int arr[], int n, int target){
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        int a = arr[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()){
            cout<<mpp[more]<<","<<i;
        }
        mpp[a]=i;
    }
}

void usingtp(vector<int> &v, int n, int target){
    int left = 0;
    int right = n-1;
    sort(v.begin(), v.end());
    while(left < right){
        int sum = v[left] + v[right];
        if(sum==target){
            cout<<left<<","<<right;
            return;
        }
        else if(sum < target) left++;
        else right--;
    }
}

int main(){
    vector<int> v={2,6,5,8,11};
    int n=5;
    int target=14;
    usingtp(v, 5, 14);
}