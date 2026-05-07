// N to 1 using backtracking

#include <bits/stdc++.h>
using namespace std;

void printNumRev(int i,int n){
    if(i>n) return;
    printNumRev(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNumRev(1,n);
}