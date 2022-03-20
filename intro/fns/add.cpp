#include <iostream>

using namespace std;

void printHello()
{
    cout << endl << "Hello " << EXIT_SUCCESS << " " << EXIT_FAILURE <<  endl;
}

int addition (int a, int b)
{
    int result;
    result = a + b;
    return result;
}

int main()
{
    int z = addition(5, 3);
    cout << "result is " << z << endl;
    printHello();
    return EXIT_SUCCESS;
}