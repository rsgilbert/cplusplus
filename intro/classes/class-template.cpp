#include <iostream>

using namespace std;

template <class T>
class Pair {
public:
    T values[2];
    Pair(T first, T second);
};

// second T specifies that this function's template 
// parameter is also the class template parameter.
template <typename T>
Pair<T>::Pair(T first, T second)
{
    this->values[0] = first;
    this->values[1] = second;
}

int main()
{
    Pair p1 { 5, 10 };
    cout << p1.values[0] << " " << p1.values[1] << endl;

    
}