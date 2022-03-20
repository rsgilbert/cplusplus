#include <iostream>

using namespace std;

struct Human
{
private:
    string name, gender;

public:
    Human(string name, string gender);
    void print()
    {
        cout << "Name: " << name << ", Gender: " << gender << endl;
    }
};

Human::Human(string name, string gender)
    : name { name }, gender { gender } {}

struct Family
{
// private:
    Human husband;
    Human wife;
    Human son;

public:
    Family(string husbandName, string wifeName, string sonName, string sonGender);
    void print();
};

Family::Family(string husbandName, string wifeName, string sonName, string sonGender)
    : husband { husbandName, "M" }, wife { wifeName, "F" }, son { sonName, sonGender } {}

void Family::print()
{
    husband.print();
    wife.print();
    son.print();
}

int main()
{
    Family f { "Joshua", "Maria", "Tim", "M" };
    f.print();

    Family *f2 = &f;
    f2->print();
    f2->husband.print();
}