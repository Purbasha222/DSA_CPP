// Print name N times

#include <bits/stdc++.h>
using namespace std;

// My way
void printName(int count){
    if(count==4) return;

    cout<<"Purbasha "<<count<<endl;
    count++;
    printName(count);
}

//Striver's way
void printN(int i,int n){
    if(i>n) return;
    cout<<"Purbasha "<<i<<endl;
    printN(i+1,n);
}

int main(){
    //My way
    int count=0;
    printName(count);

    //Striver's way
    int n;
    cout<<"Enter number: ";
    cin>>n;
    printN(1,n);
}