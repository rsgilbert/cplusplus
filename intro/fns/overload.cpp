// overloading functions

#include <iostream>

using namespace std;

int operate(int a, int b)
{
    return a * b;
}

double operate(double a, double b)
{
    return a / b;
}

double operate(double a)
{
    return a - 10;
}

bool operate()
{
    return true;
}



int main()
{
    cout << operate(53.1, 2.4) << endl 
        << operate(5, 2) << endl 
        << operate() << endl;
}

