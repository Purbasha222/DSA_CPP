#include <bits/stdc++.h>
using namespace std;

int main(){
    // Creating unordered set
    unordered_set<int> s={1,4,5,7,8,2,9};

    // Inserting elements into set
    s.insert(6);
    s.insert(7);//wont insert because it only allows unique elements

    // Traversing
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    // Accessing Elements
    auto s1 = next(s.begin(), 2);
    cout << *s1;
    cout<<endl;

    // Finding elements into set
    auto it=s.find(9);
    if(it!=s.end()){
        cout<<*it;//9
    }else{
        cout<<"Not Found";
    }
    cout<<endl;

    // Deleting elements
    s.erase(2);
    for(int i:s){
        cout<<i<<" ";
    } 
    cout<<endl;

    // Size
    cout<<s.size()<<endl;

    // Empty
    cout<<s.empty()<<endl;

    // Clear
    s.clear();
}