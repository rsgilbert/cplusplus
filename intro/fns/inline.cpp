#include <iostream>
using namespace std;

inline int sum(int a, int b) 
{
    return a + b;
}

int B = 3;
int divide(int a, const int &b=B, bool show=false);

int main()
{
    int a = 4, b = 10;
    cout << "Sum is " << sum(a, b) << endl;
    cout << "15 / 6 = " << divide(15) << endl;
}


int divide(int a, const int &b, bool show)
{
    int res = a / b;
    if(show){
        cout << "result " << res;
    }
    return res;
}