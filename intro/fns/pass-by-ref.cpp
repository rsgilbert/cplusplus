#include <iostream>

using namespace std;

void duplicate(int a, int &b)
{
    a = 50;
    b = 100;
}

void dup2(int* p, int q)
{
    *p = 25;
    q = 27;
}
int main()
{
    int x = 3, y = 10;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    cout << "NOW" << endl;

    duplicate(x, y);
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;

    cout << "NOW dup2" << endl;

    dup2(&x, y);
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;

}