//max cons ones
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,3,1,1,1,3,1,1,4,1};
    int maxi = 0;
    int cnt = 0;
    for(int i=0; i<12; i++){
        if(arr[i]==1){
            cnt++;
            maxi = max(cnt, maxi);
        }
        else cnt=0;
    }
    cout<<maxi;
}