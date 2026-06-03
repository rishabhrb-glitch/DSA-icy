//count no. of substrings
#include <bits/stdc++.h>
using namespace std;

void cntSubStrings(string s, int k){
    set<char> st;
    string ans = "";
    vector<string> arr;
    for(int i=0; i<s.size(); i++){
        for(int j=i; j<s.size(); j++){
            for(char c=i; c<=j; c++){
                st.insert(s[c]);
            }
            if(st.size()==k){
                for(char ch : s){
                    ans += ch;
                }
                s.clear();
                arr.push_back(ans);
                ans.clear();
            }
        }
    }
    for(string st : arr) cout<<st<<" ";
}

int main(){
    string s = "pqpqs";
    int k = 2;
    cntSubStrings(s, k);
}