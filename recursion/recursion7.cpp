// Sum of N numbers

#include <bits/stdc++.h>
using namespace std;

// Parameterised Recursion
void sumOfNum(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    sumOfNum(i-1,sum+i);
}

// Functional Recursion
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    sumOfNum(n,0);
    cout<<sum(n);
}