#include <iostream>

using namespace std; 

int main()
{
    auto  b { 2 };
    decltype(b) result; // same type as b
    int a (5);
    b = 2;
    a = a + 1;
    result = a - b;
    cout << result;
    return 0;
}
