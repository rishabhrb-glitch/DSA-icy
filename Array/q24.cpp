//set matrix zeroes
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4]={
        {1,1,1,1},
        {1,0,0,1},
        {1,1,0,1},
        {1,1,1,1}
    };
    int n=4;
    int m=4;
    int col[m]={0};
    int row[n]={0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i] || col[j]){
                arr[i][j]=0;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}