#include<bits/stdc++.h>
using namespace std;

int main(){
    // initialization of an iterator
    vector<int>v={10,20,30,40,50,60};

    // begin() - points to the first element of the vector and also points to the memory address where the element is stored
    vector<int>::iterator it=v.begin();//10
    cout<<*(it)<<"\n";//deference operator used to show the element not the memory address

    // end() - points to the last element of the vector and also points to the memory address after the last element stored in memory
    vector<int>::iterator i=v.end();//60
    i--;//if not done then will point to the memory address after the last element and show garbage value
    cout<<*(i)<<"\n";

    // auto keyword - automatically detects what data type it is
    auto cars={"Ford","Mustang","Mercedes","BMW"};

    // rend() - points to the element before the first element of the vector
    vector<int>::reverse_iterator l=v.rend();

    // rbegin() - points to the element at last and moves backward to the first element
    vector<int>::reverse_iterator k=v.rbegin();

    // Iterate in Reverse
     for(auto it=v.rbegin();it!=v.rend();it++){
        cout<<*it<<" ";//60 50 40 30 20 10
     }
     cout<<"\n";

    // erasing an element
    v.erase(v.begin());

    for(auto it:v){
        cout<<it<<" ";//removes 10 {20,30,40,50,60}
    }
    cout<<"\n";

    // erasing multiple elements
    v.erase(v.begin()+1,v.begin()+3);//v.begin()+3 is not included in deletion

    for(auto it:v){
        cout<<it<<" ";//20,50,60
    }
    cout<<"\n";

    // inserting an element 
    v.insert(v.begin(),10);
    
     for(auto it:v){
        cout<<it<<" ";//10,20,50,60
    }
    cout<<"\n";

    // inserting multiple elements
    v.insert(v.begin()+2,2,40);

     for(auto it:v){
        cout<<it<<" ";//10,20,40,40,50,60
    }
    cout<<"\n";

    // copying elements to v vector
    vector<int> copy(2,70);
    v.insert(v.begin(),copy.begin(),copy.end());

    for(auto it:v){
        cout<<it<<" ";//70,70,10,20,40,40,50,60
    }
    cout<<"\n";

    // swapping two vectors
    vector<int> v1={10,20};
    vector<int> v2={30,40};

    v1.swap(v2);

    for(auto it:v1){
        cout<<it<<" ";//30,40
    }
    cout<<"\n";

      for(auto it:v2){
        cout<<it<<" ";//10,20
    }
    cout<<"\n";

    // clear()- erases entire vector;
    v.clear();
}