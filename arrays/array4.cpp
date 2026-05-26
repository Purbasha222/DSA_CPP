// Second Smallest Element

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter array size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int smallest=arr[0];
    int sSmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            sSmallest=smallest;
            smallest=arr[i];
        }else if(arr[i]!=smallest && arr[i]<smallest){
            sSmallest=arr[i];
        }
    }
    cout<<sSmallest;
}