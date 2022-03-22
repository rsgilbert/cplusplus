#include <iostream>

using namespace std;

// Copy constructor
// https://www.cplusplus.com/doc/tutorial/classes2/
// When an object is passed a named object of its own type
// as argument, its copy constructor is invoked in order to 
// construct a copy.

class Runner {
public:
    Runner(string action)  {}
    string action;
    Runner(const Runner& runner);
    ~Runner() {
        // cout << "deallocating "  << endl;
        // delete &action;
    }
   
    void run();
};


Runner::Runner(const Runner& runner)
    : action("copied runner") {}


void Runner::run(){
    cout << "Running " << action << endl;
}

int main()
{
    Runner r { "everytime" };
    // r.run();
    r.action = "sometimes";
    // r.run();

    Runner r2 { "get" };
    r2.run();
    r2 = r;
    r2.run();
    r2.action = "once";
    r2.run();
    r.run();

}