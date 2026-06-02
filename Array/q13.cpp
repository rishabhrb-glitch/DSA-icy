//find no. that appears once and other numbers twice
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,3,3,4,4};
    int n=7;
    int XOR = 0;
    for(int i=0; i<n; i++){
        XOR = XOR ^ arr[i];
    }
    cout<<XOR;
}