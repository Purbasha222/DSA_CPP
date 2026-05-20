// Recursive Insertion Sort

#include<bits/stdc++.h>
using namespace std;

void recursiveInsertion(vector<int> &arr, int n){

    if(n <= 1){
        return;
    }

    recursiveInsertion(arr, n-1);

    int last = arr[n-1];
    int j = n-2;


    while(j >= 0 && arr[j] > last){
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = last;
}

int main(){

    int n;
    cout << "enter array size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "enter array elements: ";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    recursiveInsertion(arr, n);

    cout << "sorted array: ";

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}