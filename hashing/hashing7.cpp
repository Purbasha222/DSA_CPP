// Array element exactly 1 occurence (First non-repeating element)

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

    int count=1;
    for(int i=0;i<n;i++){
        if(mpp[arr[i]]==count){
            cout<<arr[i];
            break;
        }
    }
}