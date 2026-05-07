// Print count N times

#include <bits/stdc++.h>
using namespace std;

void f(int count){
    if(count==3) return;

    cout<<count<<endl;
    count++;
    f(count);
}

int main(){
    int count=0;
    f(count);
}