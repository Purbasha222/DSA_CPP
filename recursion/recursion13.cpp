// Minimum Element in an Array

#include <bits/stdc++.h>
using namespace std;

int min(vector<int> &arr,int i,int n,int minNum){
    if(n==i) return minNum;

    if(arr[i]<arr[minNum]){
        minNum=i;   
    }
    return min(arr,i+1,n,minNum);
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
    int minNum=0;

    int m=min(arr,0,n,minNum);
    cout<<arr[m];
}