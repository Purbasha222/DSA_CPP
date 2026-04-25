#include <bits/stdc++.h>
using namespace std;

int main(){
    // Creating multiset
    multiset<int> nums={4,4,8,9,1,1,6,7,7};

    // Adding elements to multiset
    nums.insert(6);
    nums.emplace(9);

    // Looping through multiset
    for(auto num:nums){
        cout<<num<<" ";//1,1,4,4,6,6,7,7,8,9,9
    }
    cout<<"\n";

    // Accessing elements
    // Access first element;
     auto it1 = nums.begin();
    cout << *it1 << " ";//1

    // Access third element
    auto it2 = next(it1, 2);
    cout << *it2;//4
    cout<<"\n";

    // Finding element
    auto it = nums.find(7);

    if (it != nums.end()){
        cout << *it;
    }else{
        cout << "Not Found!";
    }
    cout<<endl;

    // Deleting Elements
    nums.erase(4);//removes all occurences of 4
    nums.erase(nums.find(7));//removes 1st occurence of 9
    for(int num:nums){
        cout<<num<<" ";
    }
    
}