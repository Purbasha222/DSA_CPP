// E
// D E
// C D E
// B C D E
// A B C D E

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
            // ch++;
        }
        cout<<endl;
        // ch--;
    }
}