#include <bits/stdc++.h>
using namespace std;
int countDigits(int n){
    int digit = 0;
    while(n>0){
        int ld = n%10;
        n=n/10;
        digit++;
    }
    return digit;
}
int main(){
    cout<<countDigits(536278);
}
 