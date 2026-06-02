//longest common prefix
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> arr={"flower", "flow", "flight"};
    sort(arr.begin(), arr.end());
    int n = arr.size();
    string ans = "";
    string s1 = arr[0];
    string s2 = arr[n-1];
    int minLength = min(s1.length(), s2.length());
    for(int i=0; i<minLength; i++){
        if(s1[i] != s2[i]) break;
        ans += s1[i];
    }
    cout<<ans;
}