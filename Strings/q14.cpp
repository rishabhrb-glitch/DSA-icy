//sum of beauty of all substrings
#include <bits/stdc++.h>
using namespace std;

int beautySum(string s){
    int sum=0;
    for(int i=0; i<s.length(); i++){
        unordered_map<char, int> freq;
        for(int j = i; j<s.length(); j++){
            freq[s[j]]++;
            int mini = INT_MAX;
            int maxi = INT_MIN;
            for(auto it : freq){
                mini = min(mini, it.second);
                maxi = max(maxi, it.second);
            }
            sum += (maxi - mini);
        }
    }
    return sum;
}

int main(){
    string s="aabcbaa";
    cout<<beautySum(s);
}