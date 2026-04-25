#include <bits/stdc++.h>
using namespace std;

int main(){
    // Creating a multimap
    multimap <int,int> m={{1,2},{1,2},{3,4},{6,7}};

    // Inserting elements
    m.insert({10,12});

     // Traversing 
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    // Accessing elements
    auto f=next(m.begin(),2);
    cout<<f->first<<" "<<f->second<<endl;//{3,4}

    // Finding elements
    auto it=m.find(6);
    if(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;//{6,7}
    }else{
        cout<<"Not Found";
    }

    // Deleting elements
    m.erase(10);
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;// removes {10,12}
    }

}