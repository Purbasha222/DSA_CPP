// Rotate Array by k places

#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>&nums,int k){
    k = k % nums.size();

    int i = 0, j = nums.size() - 1;

    while(i < j){
        swap(nums[i], nums[j]);
        i++;
        j--;
    }

    i = 0;
    j = k - 1;

    while(i < j){
        swap(nums[i], nums[j]);
        i++;
        j--;
    }

    i = k;
    j = nums.size() - 1;

    while(i < j){
        swap(nums[i], nums[j]);
        i++;
        j--;
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> nums(n);
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    rotateArray(nums,3);
    
}