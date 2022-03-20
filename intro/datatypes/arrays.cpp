#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    array<int, 4> ar = {3, 5};

    for(int i = 0; i < ar.size(); i++)
    {
        // cout  << "Element at index " << i << " is " << ar[i] << endl;
    }

    string s = "Good morning";
    // cout << s << endl;
    // cout << s.c_str() << endl;
    char ch = 'U', p = 'm';
    char const * const n = &ch;
     printf("n is %u", n);
    // n++;
    // *n = 7;
    cout << "n is " << n << endl;
    // n = &p;
    // cout << "n is " << n << endl;
    // printf("n is %u", n);

    const char* sing = "hosanna";
    // *sing = "jj";
    void *t = &sing;
    cout << "K " << t << endl;
    int *r = NULL;
    cout << r << endl;

}