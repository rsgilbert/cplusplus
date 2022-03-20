#include <iostream>

using namespace std;

template <typename T, int N>
T fixed_multiply(T val)
{
    return val * N;
}

int main()
{
    const int a = 7;
    int v = fixed_multiply<int, a>(20);
    cout << "result: " << v;
}