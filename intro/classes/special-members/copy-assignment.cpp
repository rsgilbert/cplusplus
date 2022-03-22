#include <iostream>

using namespace std;

// special member - copy assignment

class Plant {
public:
    int height;
    Plant(int h) : height(h){}
    // copy assignment 
    Plant& operator=(const Plant& plant);
};

Plant& Plant::operator=(const Plant& plant) 
{
    this->height = 10000;
    return *this;
}

int main()
{
    Plant p1 { 25 };
    cout << "p1 height " << p1.height << endl; 

    // invokes copy constructor, not copy assignment
    Plant p2 = p1; 
    cout << "p2 height " << p2.height << endl; 

    // invokes copy assignment special member
    p2 = p1;
    cout << "p2 height again " << p2.height << endl; 

}