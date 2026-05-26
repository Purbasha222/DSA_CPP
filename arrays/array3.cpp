// Smallest Element 

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
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<smallest;
}