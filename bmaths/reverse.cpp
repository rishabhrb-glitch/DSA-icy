#include <bits/stdc++.h>
using namespace std;
int reverseNum(int n){
    int newNum=0;
    while(n>0){
        int ld = n%10;
        newNum = newNum*10 + ld;
        n=n/10;
    }
    return newNum;
}
int main(){
    cout<<reverseNum(536278);
}