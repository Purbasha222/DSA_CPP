#include <bits/stdc++.h>
using namespace std;

int main(){
    // Creating a deque
    deque<string> cars={"Volvo", "BMW", "Ford", "Mazda"};

    // Access a Deque
    cout<<cars[2];//Ford
    cout<<cars.at(1);//BMW
    cout<<cars.front();//Volvo
    cout<<cars.back();//Ferrari

    // Change an element
    cars[2]="Porsche";
    cout<<cars[2];//Porsche

    // Add elements to deque
    cars.push_front("Lambo");//Lambo at 0
    cars.push_back("Tesla");//Tesla at last

    // Remove elements from deque
    cars.pop_front();//removes Lambo
    cars.pop_back();//removes Tesla

    // Size
    cout<<cars.size();//4

    // Empty
    cout<<cars.empty();//0

    // Clear
    cars.clear();
}