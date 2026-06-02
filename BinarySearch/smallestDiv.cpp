//smallest divisor given a threshold
#include <bits/stdc++.h>
using namespace std;

int maxi(vector<int> &arr){
    int maxm = arr[0];
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > maxm) maxm = arr[i];
    }
    return maxm;
}

int sumofD(vector<int> &arr, int div){
    int sum = 0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        sum += ceil((double)arr[i] / (double)div);
    }
    return sum;
}

int f(vector<int> &arr, int th){
    int l = 1;
    int h = maxi(arr);
    int ans = -1;
    while(l <= h){
        int m = (l + h)/2;
        if(sumofD(arr, m) <= th){
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
    vector<int> arr={1,2,5,9};
    int th = 7;
    cout<<f(arr, th);
}

