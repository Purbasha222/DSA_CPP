// Recursive Bubble Sort

#include<bits/stdc++.h>
using namespace std;

void recursiveBubble(vector<int> &arr, int j, int n){

    if(n == 1){
        return;
    }

    if(j == n - 1){
        recursiveBubble(arr, 0, n - 1);
        return;
    }

    if(arr[j] > arr[j + 1]){
        swap(arr[j], arr[j + 1]);
    }

    recursiveBubble(arr, j + 1, n);
}

int main(){

    int n;
    cout << "enter array size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "enter array elements: ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    recursiveBubble(arr, 0, n);

    cout << "sorted array: ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}