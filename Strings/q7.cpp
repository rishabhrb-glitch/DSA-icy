//anagrams
#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string s, string t){
    if(s.length() != t.length()) return false;
    int freq[26]={0};
    for(int i=0; i<s.length(); i++){
        freq[s[i]-'A']++;
    }
    for(int i=0; i<t.length(); i++){
        freq[t[i]-'A']--;
    }
    for(int i=0; i<26; i++){
        if(freq[i] != 0) return false;
    }
    return true;
}

int main(){
    string s= "CAT";
    string t = "ACT";
    cout<<(checkAnagram(s, t));
}