#include <bits/stdc++.h>
using namespace std;

int main(){
    // Creating a set
    set<int> nums={1,7,9,8};

    // Looping through set
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<"\n";

    // Finding an element
    nums.find(7);

    // Adding an element to set
    nums.insert(3);//1,3,7,8,9
    nums.emplace(5);//1,3,5,7,8,9

    // Lower Bound & Upper Bound
    auto lb=nums.lower_bound(3);
    auto ub=nums.upper_bound(7);

    cout<<"Lower bound "<<*lb<<endl;//3
    cout<<"Upper bound "<<*ub<<endl;//8

    // Removing an element from set
    nums.erase(9);
    for(auto num:nums){
        cout<<num<<" ";//1,3,5,7,8
    }
    cout<<"\n";

    // 1,3,5,7,8
    auto it1=nums.find(3);//start
    auto it2=nums.find(5);//end
    nums.erase(it1,it2);
    for(auto num:nums){
        cout<<num<<" ";//1,5,7,8
    }
    cout<<"\n";

    // Count
    cout<<nums.count(3);
    cout<<"\n";

    // Size
    cout<<nums.size();//4
    cout<<"\n";

    // Empty
    nums.empty();//0

    // Clear
    nums.clear();//clear set
}