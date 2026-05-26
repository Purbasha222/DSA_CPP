// Left Rotate by 1 place

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> nums(n);
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int temp=nums[0];
    for(int i=0;i<n;i++){
        nums[i-1]=nums[i];
    }
    nums[n-1]=temp;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}