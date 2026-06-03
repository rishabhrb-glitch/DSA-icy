//longest palindromic substring
#include <bits/stdc++.h>
using namespace std;

int longPal(string s){
    int start = 0;
    int maxLen = 1;
    for(int i=0; i<s.size(); i++){
        //odd
        int l=i;
        int r=i;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            if(r-l+1 > maxLen){
                maxLen = r-l+1;
                start = l;
            }
            l--;
            r++;
        }
        //even
        int l=i;
        int r=i+1;
        while(l >= 0 && r<s.size() && s[i]==s[r]){
            if(r-l+1 > maxLen){
                maxLen = r-l+1;
                start = l;
            }
            l--;
            r++;
        }
    }
}

int main(){
    string s="ababcd";
    cout<<longPal(s);
}