// Maximum Element in Array

#include <bits/stdc++.h>
using namespace std;

int max(vector<int> &arr,int n,int i,int maxNum){
    if(n==i)return maxNum;

    if(arr[i]>arr[maxNum]){
        maxNum=i;
    }
    return max(arr,n,i+1,maxNum);
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
    int maxNum=0;

    int m=max(arr,n,0,maxNum);
    cout<<arr[m];
}