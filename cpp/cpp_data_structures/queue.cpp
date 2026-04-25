#include <bits/stdc++.h>
using namespace std;

int main(){
    // Creating a queue - FIFO
    queue<string> cars;

    // Adding elements in queue
    cars.push("BMW");
    cars.push("Mercedes");
    cars.push("Ferrari");
    cars.emplace("VW");//same as push
    cars.push("Porsche");

    // Access queue elements
    cars.front();//BMW
    cars.back();//Porsche

    // Change queue elements using front and back
    cars.front()="Mustang";
    cout<<cars.front();//Mustang

    cars.back()="Lambo";
    cout<<cars.back();//Lambo

    // Remove elements from queue
    cars.pop();//removes mustang
    cout<<cars.front();//Mercedes

    // Size
    cout<<cars.size();//4

    // Empty
    cout<<cars.empty();//0
}