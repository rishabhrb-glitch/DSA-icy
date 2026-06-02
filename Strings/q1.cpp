//remove outermost parenthesis
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "(()())(())";
    string res = "";
    int level = 0;
    for(char ch : s){
        if(ch == ')'){
            if(level > 0){
                res += ch;
            }
            level++;
        }
        else if(ch == '('){
            level--;
            if(level > 0){
                res += ch;
            }
        }
    }
    cout<<res;
}