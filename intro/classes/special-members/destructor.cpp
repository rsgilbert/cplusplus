#include <iostream>

using namespace std;

// special member - destructor

class Sleep {
    string* sptr;
public:
    Sleep() : sptr(new string){}
    Sleep(const string& str) : sptr(new string(str)) {}
    ~Sleep() {
        cout << "Destructing. Deleting " << *sptr << endl;
        delete sptr;
    }
    const string& content() const { return *sptr; }

};

void workout() 
{
    Sleep s0 { "Magnificient" };
}

int main()
{
    string m = *new string("Tight");
    cout << m << endl;
    workout();
    Sleep s1;
    Sleep s2 { "Great victory" };
    cout << "s2 content: " << s2.content() << endl;
    return EXIT_SUCCESS;

}