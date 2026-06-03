//sort characters by frequency
#include <bits/stdc++.h>
using namespace std;

void sortChar(string s){
    vector<char> arr;
    unordered_map<char, int>mpp;
    for(char ch : s) mpp[ch]++;
    priority_queue<pair<int, char>> pq;
    for(auto it : mpp) pq.push({it.second, it.first});
    while(!pq.empty()){
        arr.push_back(pq.top().second);
        pq.pop();
    }
    for(auto ch : arr) cout<<ch<<" ";
}

int main(){
    string s = "raaaajj";
    sortChar(s);
}