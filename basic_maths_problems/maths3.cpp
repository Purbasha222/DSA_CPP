#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=129;
    int original=n;
    int rev=0;
    while(n!=0){
        rev=(rev*10)+n%10;
        n/=10;
    }
    if(rev==original){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome";
    }

}