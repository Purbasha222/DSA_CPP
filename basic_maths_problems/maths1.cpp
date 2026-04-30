#include <bits/stdc++.h>
using namespace std;

int main(){
    // Brute Force Approach
    int num=1532;
    int count=0;
    if(num==0)count++;
    while(num!=0){
        count++;
        num/=10;
    }
    cout<<count<<endl;

    // Optimal Approach
    int n=137122;
    
    
}