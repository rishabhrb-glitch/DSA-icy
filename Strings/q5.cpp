//isomorphic strings
#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t){
    if(s.length() != t.length()) return false;
    
}

int main(){
    string s="paper";
    string t="title";
    
    cout<<(isIsomorphic(s, t) ? "True" : "False");
}