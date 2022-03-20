#include <iostream>
using namespace std;

namespace my_ns
{
    int a = 20;
    int b ; // initialized to 0 because it uses static storage
    int m = 90;
}

namespace other_ns
{
    // int b = 77;
    using namespace my_ns;
}

// namespace aliasing
namespace other2_ns = other_ns;

namespace k_ns
{
    int a = 50;
    void k()
    {
        {
            using namespace my_ns;
            cout << "HI " << b << "!" << endl;
        }
        {
            using namespace other2_ns;
            cout << "HI " << b << "!" << endl;
        }
    }
}

namespace k_ns
{
    int b = 12;
}

using namespace k_ns;

int main()
{
    cout << "my namespace " << endl
         << "a is " << my_ns::a << endl
         << "b is " << my_ns::b << endl;

    using my_ns::m;
    m = 98;

    cout << "m is " << m;

    cout << "def ns" << endl
         << "k is " << k_ns::a << " also " << a << endl;

    k();

    int p;
    string dd;
    cout << endl << "P is " << (int)p  << "#" << dd << "#";

}