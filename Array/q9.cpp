//union of two sorted arrays
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={1,1,2,3,4,5};
    int n=6;
    int arr2[]={3,5,6,7,9};
    int m=5;
    int i=0;
    int j=0;
    vector<int> unionArr;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            if(unionArr.size()==0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i] > arr2[j]){
            if(unionArr.size()==0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
        else{
            if (unionArr.empty() || unionArr.back() != arr1[i])
                    unionArr.push_back(arr1[i]);
                i++; j++;
        }
    }
    while(i<n){
        if(unionArr.size()==0 || unionArr.back() != arr1[i]){
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(unionArr.size()==0 || unionArr.back() != arr2[j]){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    for(auto it : unionArr) cout<<it<<" ";
}