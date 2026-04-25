#include <bits/stdc++.h>
using namespace std;

int main(){
    // Creating map - no duplicates
    map<int,string> m={{2,"Roll"},{9,"CGPA"}};

    // Traversing
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;// 2 roll 
    }

    // Inserting elements
    m.insert({3,"Purbasha Goswami"});
    cout<<m[3]<<endl;

    // Accessing elements
    cout<<m[2]<<endl;
    cout<<m.at(9)<<endl;

    // Finding elements
    auto it=m.find(2);
    if(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
    }

    // Updating elements
    m[2]="Birthday";
    cout<<m[2]<<endl;

    // Deleting elements
    m.erase(2);
    for(auto& i:m){
        cout<<i.first<<" "<<i.second<<endl;// removes {2, Roll}
    }

    // Size
    cout<<m.size();
}