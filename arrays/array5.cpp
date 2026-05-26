// If Array is Sorted

#include <bits/stdc++.h>
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

    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }else{
            cout<< false;
        }
    }
    cout<< true;
}