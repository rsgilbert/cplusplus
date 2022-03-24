#include <iostream>

using namespace std;

class Square {
    int width;
public:
    Square() = default;
    Square(int w) : width(w) {}
    int area() const { return width * width; }
    friend void printWidth(Square& sq);
};

void printWidth(Square& sq)
{
    cout << "width is " << sq.width << endl;
}

int main()
{
    Square s { 20 };
    printWidth(s);   
}