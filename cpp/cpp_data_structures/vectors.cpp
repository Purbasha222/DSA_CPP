#include<bits/stdc++.h>
using namespace std;

int main(){
    // declaring a vector without size;
    vector<int> v;

    // adding elements to vector
    v.push_back(1);//puts element in the vector
    v.emplace_back(2);//puts element in the vector

    // ways to acess a vector
    cout<<v[1]<<"\n";//2
    cout<<v.at(0)<<"\n";//1
    cout<<v.front()<<"\n";//1
    cout<<v.back()<<"\n";//2

    // Iterates through each element and prints them
    for(int x : v){
        cout << x << " "<<"\n";
    }

    // changing a vector element
    v[0]=100;

    // removing elements from vector
    v.pop_back();//removes last element from vector

    // declaring a vector with size;
    vector<int> a(5);//size of 5 

    // declaring a vector with elements;
    vector<string>cars={"BMW","VW"};//{"BMW","VW"}

    // declaring a vector with instances and size
    vector<int>b(3,100);//{100,100,100}

    // Vectors can also be used with pair
    vector<pair<int,int>> vec;
    vec.push_back({10,20});//need to give {}
    vec.emplace_back(30,40);//dont need to give {}
    cout<<vec[0].first<<" "<<vec[1].first;//10,30
    
    // Vector Size
    cout<<vec.size();

    // Check if vector is empty
    vec.empty();//returns 0 if not empty and 1 if empty
}