// Move Zeroes to End

#include <bits/stdc++.h>
using namespace std;

void bruteForce(vector<int> arr,int n){
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    int nz=temp.size();
    for(int i=0;i<nz;i++){
        arr[i]=temp[i];
    }

    for(int i=nz;i<n;i++){
        arr[i]=0;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

void optimal(vector<int> arr,int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    if(j==-1) cout<<" no non zero numbers";

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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

    bruteForce(arr,n);
    cout<<endl;
    optimal(arr,n);
    
}