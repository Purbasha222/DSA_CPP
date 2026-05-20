#include <bits/stdc++.h>
using namespace std;

int countOccurences(vector<int> &arr,int n,int i,int target,int count){
    if(i==n) return count;

    if(arr[i]==target){
        count++;
    }
    return countOccurences(arr,n,i+1,target,count);
}

int main(){
    int n,target,count=0;
    cout<<"enter array size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target element: ";
    cin>>target;
    cout<<countOccurences(arr,n,0,target,count);
}