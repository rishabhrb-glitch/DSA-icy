//maximum nesting depth of parenthesis
#include <bits/stdc++.h>
using namespace std;

int getLength(string s){
    int cnt = 0;
    int maxi = 0;
    for(char ch : s){
        if(ch == '('){
            cnt++;
            maxi = max(cnt, maxi);
        }
        else if(ch == ')') cnt--;
    }
    return maxi;
}

int main(){
    string s = "(1)+((2))+(((3)))";
    cout<<getLength(s);
}