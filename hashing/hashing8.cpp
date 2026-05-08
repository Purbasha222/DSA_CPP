// Array occurence with same count but returning the smaller element first

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    map<int,int> mpp;
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    int maxCount=0,ans=0;
    for(auto it:mpp){
        if(it.second>maxCount){
            maxCount=it.second;
            ans=it.first;
        }
    }
    cout<<ans;
}