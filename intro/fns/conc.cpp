#include <iostream>

using namespace std;

string concatenate(string a, string b)
{
    return a + b;
}

string conc_by_ref(const string &x, const string &y)
{
    // x = "Tonic";
    return x + y;
}

int main()
{
    string p = "Hey, ";
    string q = "How are you?";
    cout << conc_by_ref(p, q) << endl;
    cout << concatenate(p, q) << endl;
}