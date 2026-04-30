#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=153;
    int original=n;
    int sum=0;
    int count=0;

    while(n!=0){
        n/=10;
        count++;
    }
    n=original;
    while(n!=0){ 
        int r=n%10;
        sum+=pow(r,count);
        n/=10;
    }
    if(original==sum) cout<<"Armstrong";
    else cout<<"Not Armstrong";
}