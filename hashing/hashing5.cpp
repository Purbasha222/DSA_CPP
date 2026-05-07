// Maximum frequency of an element in an array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements ";
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

   int maxCount = 0, ans = 0;
    for(auto it : mpp){
        if(it.second > maxCount){
            maxCount=it.second;
            ans=it.first;
        }
    }
    cout << ans;
    

}