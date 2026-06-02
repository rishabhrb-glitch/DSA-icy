//book allocation problem
#include <bits/stdc++.h>
using namespace std;

int mini(vector<int> &arr){
    int minm = arr[0];
    for(int i=0; i<arr.size(); i++){
        if(arr[i] < minm) minm = arr[i];
    }
    return minm;
}

int summ(vector<int> &arr){
    int total = 0;
    for(int i=0; i<arr.size(); i++){
        total += arr.size();
    }
    return total;
}

bool allocationisPossible(vector<int> &arr, int barrier, int k){
    int allocatedStu=1;
    int pages=0;
    int n=arr.size();
    for(int i=0; i<n; i++){
        if(arr[i] > barrier) return false;
        if(pages + arr[i] > barrier){
            allocatedStu += 1;
            pages += arr[i];
        }
        else{
            pages += arr[i];
        }
    } 
    if(allocatedStu > k) return false;
    else return true;
}

int bookAllocation(vector<int> &arr, int students){
    int l = mini(arr);
    int h = summ(arr);
    int ans = -1;
    while(l <= h){
        int m = (l + h)/2;
        if(allocationisPossible(arr, m, students)){
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
    vector<int> arr={12,34,67,90};
    int students = 2;
    cout<<bookAllocation(arr, students);
}