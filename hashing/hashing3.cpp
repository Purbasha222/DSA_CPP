// Lower Case and Upper Case Hashing

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;

    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cout<<"enter query size: ";
    cin>>q;
    cout<<"enter the character you want to calculate frequency: ";
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
}