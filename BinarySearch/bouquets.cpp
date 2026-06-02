//min n0. of days to make M bouquets
// m - no. of bouquets
//k - adjacent flower req.
#include <bits/stdc++.h>
using namespace std;

int mini(vector<int> &arr){
    int mini = arr[0];
    for(int i=0; i<arr.size(); i++){
        if(arr[i] < mini) mini = arr[i];
    }
    return mini;
}

int maxi(vector<int> &arr){
    int maxi = arr[0];
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > maxi) maxi = arr[i];
    }
    return maxi;
}

int possible(vector<int> &arr, int day, int m, int k){
    int cnt = 0;
    int noofB = 0;
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        if(arr[i] <= day) cnt++;
        else{
            noofB += (cnt/k);
            cnt = 0;
        }
    }
    noofB += (cnt/k);
    if(noofB > m) return true;
    else return false;
}

int bs(vector<int> &arr, int m, int k){
    int l = mini(arr);
    int h = maxi(arr);
    int ans = -1;
    while(l <= h){
        int mid = (l + h)/2;
        if(possible(arr, mid, m, k) == true){
            ans = mid;
            h = m-1;
        }
        else{
            l = m + 1;
        }
    }
    return l;
}

int main(){
    vector<int> arr={7,7,7,7,13,11,12,7};
    int m=2;
    int k=3;
    cout<<bs(arr, m, k);
}