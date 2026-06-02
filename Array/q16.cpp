//sort 0,1,2
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,1,2,0,1,2,0,0,0,1};
    int n=10;
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
                high--;
        }
    }
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}
