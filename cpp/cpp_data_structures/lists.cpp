#include<bits/stdc++.h>
using namespace std;

int main(){
    // Creating list
    list<string> cars={"Volvo", "BMW", "Ford", "Mazda"};

    // Looping through cars
    for (string car : cars) {
        cout << car << "\n";
    }
    cout<<"\n";

    // Access a list
    cout<<cars.front();//Volvo
    cout<<cars.back();//Mazda

    // Adding elements to List
    cars.push_front("BMW");
    cout<<cars.front();//BMW
    cars.push_back("Mercedes");
    cout<<cars.back();//Mercedes

    // Changing a list
    cars.front()="Ferrari";
    cout<<cars.front();//Ferrari
    cars.back()="Mustang";
    cout<<cars.back();//Mustang

    // Removing elements from list
    cars.pop_front();//Removes Ferrari
    cars.pop_back();//removes Mustang

    // Size
    cars.size();

    // Empty
    cars.empty();
}