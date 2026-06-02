//majority element [>N/2]
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n=16;
    int cnt = 0;
    int el;
    for(int i=0; i<n; i++){
        if(cnt==0){
            cnt = 1;
            el = arr[i];
        }
        else if(arr[i]==el) cnt++;
        else cnt--;
    }
    int cnt1=0;
    for(int i=0; i<n; i++){
        if(arr[i]==el) cnt1++;
    }
    if(cnt1 > n/2){
        cout<<el;
    }
}
