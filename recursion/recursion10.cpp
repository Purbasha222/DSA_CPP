// String Palindrome

#include <bits/stdc++.h>
using namespace std;

bool stringPalindrome(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return stringPalindrome(i+1,s);
}

int main(){
    string s;
    cin>>s;
    cout<<stringPalindrome(0,s);
}