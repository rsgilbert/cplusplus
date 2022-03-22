#include <iostream>

using namespace std;

template <class T>
class Food {
    T name;
public:
    Food(T arg) { name = arg; }
    T increase() { return name + " increased"; }
};

// specialized template
template <>
class Food <int> {
    int name;
public:
    Food(int arg) { name = arg * arg; }
    int increase() { return name * 10; }
};

int main()
{
    Food<string> fstr { "macron" };
    cout << fstr.increase() << endl;

    Food fint { 5 };
    cout << fint.increase() << endl;
}