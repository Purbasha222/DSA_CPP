#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,4,6,2,9};

    // sorted in increasing order
    sort(arr,arr+5);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // sorted in decreasing order
    sort(arr,arr+5,greater<int>());
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    // comparator
    auto comp=[](pair<int,int> p1,pair<int,int> p2){
        if(p1.second<p2.second) return true;
        if(p1.second>p2.second) return false;

        if(p1.first>p2.first) return true;
        return false;
    };

    // compared
    sort(a,a+3,comp);
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<" ";
    }
    cout<<endl;

    // set bits
    int num=7;
    int cnt=__builtin_popcount(num);//3
    cout<<cnt<<endl;

    // permutations possible
    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    // max element in array
    int r[]={2,50,3,8,90};
    int max=*max_element(r,r+5);
    cout<<max<<endl;

    // min element in array
    int min=*min_element(r,r+5);
    cout<<min<<endl;
}