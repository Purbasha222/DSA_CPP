// Second Largest Element

#include<bits/stdc++.h>
using namespace std;

int main(){
    // Better Approach
    int n;
    cout<<"enter array size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int sLargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>sLargest&&arr[i]!=largest){
            largest=arr[i];
            sLargest=arr[i];
        }
    }
    cout<<sLargest;

    // Optimal Approach
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            sLargest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]>sLargest){
            sLargest=arr[i];
        }
    }
    cout<<sLargest;
}