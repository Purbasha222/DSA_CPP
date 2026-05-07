// Number hashing

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q;
    cout<<"Enter the size of the query: ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the number you want to receive frequency: ";
        cin>>number;
        cout<<hash[number]<<endl;
    }

    return 0;
}