#include <bits/stdc++.h>
using namespace std;

bool sortedArr(vector<int> &arr,int n,int i){
    if(i==n-1) return true;
    if(arr[i]>arr[i+1]) return false;
    else return sortedArr(arr,n,i+1);
}

int main(){
    int n;
    cout<<"enter array size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sortedArr(arr,n,0);
}