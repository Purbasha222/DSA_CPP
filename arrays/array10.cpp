// Linear Search

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,target;
    bool found=false;
    cout<<"enter array size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target element: ";
    cin>>target;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"Target element exists"<<endl;
            found=true;
            break;
        }
    }
    if(found==false){
        cout<<"Target element do not exists";
    }
}