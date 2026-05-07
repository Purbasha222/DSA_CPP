// Lower Case Character Hashing

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    int hash[25]={0};
    
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cout<<"Enter query size: ";
    cin>>q;
    cout<<"Enter query elements to calculate frequency"<<endl;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<" ";
    }
    return 0;
}