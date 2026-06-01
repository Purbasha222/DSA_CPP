// Union of two sorted arrays

#include <bits/stdc++.h>
using namespace std;

int main(){
    // brute force
    int n1,n2;
    cout<<"enter array size 1: ";
    cin>>n1;
    map<int,int> mpp;
    vector<int> arr1(n1);
    cout<<"enter array elements 1: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
        mpp[arr1[i]]++;
    }

    cout<<"enter array size 2: ";
    cin>>n2;
    vector<int> arr2(n2);
    cout<<"enter array elements 2: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
        mpp[arr2[i]]++;
    }

    // optimal approach
    vector<int> temp;
    int i=0,j=0;

    for(auto it:mpp){
        temp.push_back(it.first);
    }

    for(int x : temp){
        cout << x << " ";
    }

    while(i<n1&&j<n2){
        if(arr1[i]<=arr2[j]){
            if(temp.size()==0||temp.back()!=arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
        }else{
            if(temp.size()==0||temp.back()!=arr2[j]){
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n1){
        if(temp.size()==0||temp.back()!=arr1[i]){
            temp.push_back(arr1[i]);
        }
        i++;
    }

    while(j<n2){
        if(temp.size()==0||temp.back()!=arr2[j]){
            temp.push_back(arr2[j]);
        }
        j++;
    }

    for(auto it:temp){
        cout<<it<<" ";
    }
}