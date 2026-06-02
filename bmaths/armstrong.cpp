#include <bits/stdc++.h>
using namespace std;
void armStrong(int n){
    int og = n;
    int length = 3;
    int sum = 0;
    while(n>0){
        int ld = n%10;
        int sum = sum + pow(ld, length);
        n=n/10;
    }
    if(og==sum) cout<<"YES";
    else cout<<"NO";
}
int main(){
    armStrong(371); 
}