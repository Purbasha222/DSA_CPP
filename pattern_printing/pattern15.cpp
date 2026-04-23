// A B C D E
// A B C D
// A B C
// A B
// A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    char ch='A';
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}