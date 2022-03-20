#include <iostream>
#include <new>

using namespace std;

int main()
{
    int i, n;
    int *p;
    cout << "How many numbers";
    cin >> i;

    p = new (nothrow) int[i];
    if(p == nullptr)
    {
        cout << "Error: memory could not be allocated" << endl;
        exit(1);
    }
    for(n = 0; n < i; n++)
    {
        cout << "Enter number for position: " << n+1 << "/" << i << endl;
        cin >> p[n];
    }
    cout << "Thank you" << endl;
    cout << "You entered: ";
    for(n = 0; n < i; n++)
    {
        cout << p[n] << " ";
    }
    delete[] p;

}