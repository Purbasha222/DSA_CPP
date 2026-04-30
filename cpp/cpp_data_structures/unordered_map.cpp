#include <bits/stdc++.h>
using namespace std;

int main(){
    // Creating unordered map
    unordered_map<int,int> um={{1,100},{3,300},{2,200}};

    // Inserting into unordered map
    um.insert({4,100});

    // Traversing through unordered map
    for(auto it:um){
        cout<<it.first<<" "<<it.second<<" ";
    }
    cout<<endl;

    // Updating element
    um[4]=400;
    cout<<um[4]<<endl;

    // Finding an element
    auto f=um.find(4);
    if(f!=um.end()){
        cout<<f->first<<" "<<f->second<<endl;
    }

    // Accessing an element
    auto a=next(um.begin(),1);
    cout<<a->first<<" "<<a->second<<endl;

    // Deleting an element
    um.erase(4);
    for(auto it:um){
        cout<<it.first<<" "<<it.second<<endl;
    }
}