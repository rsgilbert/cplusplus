#include <iostream>

using namespace std;

// Using static members in a class to keep track of a
// counter field.

class House
{
    string type;
    static int counter;

public:
    House(string type);
    void print();
    static int get_count();
};

int House::counter = 2;

House::House(string type)
    : type(type)
{
    House::counter++;
}

 int  House::get_count()
{ 
    return House::counter;
}

void House::print()
{
    cout << type << " house" << endl;
}

int main()
{

    cout << "Count is " << House::get_count() << endl;
    House h1("bangalow");
    cout << "Count is " << h1.get_count() << endl;
    House h2("flat");
    // House::counter = 100;
    cout << "Count is " << House::get_count() << endl;
    h1.print();
    h2.print();
}
