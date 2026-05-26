// Remove Duplicates from Sorted Array

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    // Brute Force Approach
    set<int> st;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << "Array after removing duplicates: ";
    for (auto it : st) {
        cout << it << " ";
    }

    // Optimal Approach
    int i=0;
    vector<int>arr(n);
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
    cout<<i+1;
}