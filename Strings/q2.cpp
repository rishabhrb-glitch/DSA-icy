//reverse words in a string
#include <bits/stdc++.h>
using namespace std;

void rev(string &s){
    int i=0; 
    int j=s.length()-1;
    while(i <= j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
}

void countSpaces(string &s, vector<int> &v){
    v.push_back(-1);
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            v.push_back(i);
        }
    }
    v.push_back(s.length());
}

int main(){
    string s = "welcome to the jungle";
    rev(s);
    vector<int> spaceIndex;
    countSpaces(s, spaceIndex);
    int i = 0;
    while(i < spaceIndex.size()-1){
        int l = spaceIndex[i]+1;
        int h = spaceIndex[i+1]-1;
        while(l <= h){
            swap(s[l], s[h]);
            l++;
            h--;
        }
        i++;
    }
    for(char c : s) cout<<c;
}