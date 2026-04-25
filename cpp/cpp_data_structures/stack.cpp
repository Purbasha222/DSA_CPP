#include <bits/stdc++.h>
using namespace std;

int main(){
    // Creating stack - LIFO
    stack<string> cars;

    // Adding elements to stack
    cars.push("BMW");
    cars.push("Mercedes");
    cars.push("Ferrari");
    cars.emplace("VW");//same as push
    cars.push("Porsche");//top element

    // Access stack elements through top
    cout<<cars.top();//Porsche

    // Removing elements from stack
    cars.pop();//Removes Porsche

    // Size
    cout<<cars.size();//4

    // Empty
    cars.empty();//0
}