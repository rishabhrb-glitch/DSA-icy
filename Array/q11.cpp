//find missing number
#include <bits/stdc++.h>
using namespace std;

int sumMethod(int arr[], int s, int n){
    int Su = (n*(n+1))/2;
    int Sum = 0;
    for(int i=0; i<s; i++) Sum += arr[i];
    int req = Su - Sum;
    return req;
}
int main(){
    int arr[] = {1,2,3,5};
    int n=5;
    int s=4;
    cout<<sumMethod(arr, 4, 5);
}