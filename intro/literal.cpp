#include <iostream>

using namespace std;

#define MAV "marvel"

int main()
{
    int a = 120;
    int b = 013; // 11b10
    int c = 0xb3; // 14b10
    
    std::cout << a << std::endl 
        << b << std::endl 
        << c << std::endl;

    char ch = 't';
    std::cout << ch << std::endl;

    char arr[] = "maybe";
    string m = arr;
    m =  " not " "t" "oda\
    y";
    m = R"(your " \t \n majesty)"; // raw string
    m = u8"Please"; // utf-8
    cout << m << endl;

    bool isDone = true;
    bool notDone = false;
    cout << isDone << notDone;
    int *p = nullptr;

    const double PI = 3.14;
    cout << endl << PI << endl;
    cout << MAV;


    const int x = 3;
    const int y = 5;
    const int z = x & y;
    const int z2 = x | y;
    const int q = ~-1;
    cout << z << endl << z2 << q ;

    

}