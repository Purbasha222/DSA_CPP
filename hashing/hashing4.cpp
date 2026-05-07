// Array Hashing using map 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    for(auto it :mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cout<<"enter query size: ";
    cin>>q;
    cout<<"enter query elements: ";
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<" ";

    }
}