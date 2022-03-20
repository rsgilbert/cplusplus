#include <iostream>

using namespace std;

template <typename SomeType>
SomeType sum(SomeType a, SomeType b)
{
    return a + b;
}

template <typename T, class U, class R>
R play(T x, U y)
{
    return x * x + y;
}


int main(){
    int result1 = sum(5, 2);
    double dresult = sum<double>(1.0F, 5.3);
    cout << result1 << endl << dresult << endl;

    const double presult = play<double, int, double>(0.2, 2);
    cout << "play result " << presult << endl;
}
