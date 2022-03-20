#include <iostream>
#include <string>

using namespace std;

class Person
{
    int age;
    string firstname, lastname;

public:
    Person(string, string, int);
    int get_weight();
    string fullname();
};

// Person::Person(string fname, string lname, int age)
// {
//     this->firstname = fname;
//     this->lastname = lname;
//     this->age = age;
// }

// define constructor using member initialization
Person::Person(string fname, string lastname, int age)
    : firstname(fname), lastname(lastname), age(age)
    {}

string Person::fullname()
{
    return firstname + " " + lastname;
}

int main()
{
    Person p {"Tim", "Walker", 30};
    cout << p.fullname() << endl;
}