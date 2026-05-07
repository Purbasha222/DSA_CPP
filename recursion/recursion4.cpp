// Print N to 1

#include <bits/stdc++.h>
using namespace std;

void printNumRev(int i,int n){
    if(i<1) return;

    cout<<i<<endl;
    printNumRev(i-1,n);
}

int main(){
    int i;
    cout<<"Enter number: ";
    cin>>i;
    printNumRev(i,1);
}