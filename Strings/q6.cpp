//check if rotated string
#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal){
    if(s.length() != goal.length()) return false;
    string doubledS = s + s;
    return doubledS.find(goal) != string::npos;
}

int main(){
    string s = "rotation";
    string goal = "tionrota";
    cout<<(rotateString);
}