//largest odd substring in a given string
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "5347";
    int ind = -1;
    for(int i=s.length()-1; i>=0; i--){
        if((s[i]-'0')%2 == 1){
            ind = i;
            break;
        }
    }
    int i = 0;
    while(i <= ind && s[i]==0) i++;
    cout<<s.substr(i, ind-i+1);
}