#include <iostream>

using namespace std;

// special members - default constructor 
// https://www.cplusplus.com/doc/tutorial/classes2/

class Addup {
public:
    // Addup() {};
    // Addup(int initial);
    int total = 9;
    void accumulate(int x) { total += x; }
};

// Addup::Addup() { total = 3; }
int main()
{
    Addup ad;
    ad.accumulate(20);
    ad.accumulate(12);
    cout << ad.total << endl; // 41
}