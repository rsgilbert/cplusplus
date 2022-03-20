#include <iostream>

using namespace std;

struct Rectangle
{
    int width, height;
    public:
        Rectangle(int, int);
        void set_values(int, int);
        int area(void);
} rect(5, 11);

// Define constructor 
Rectangle::Rectangle(int x, int y)
{
    set_values(x, y);
}
void Rectangle::set_values(int x, int y)
{
    width = x;
    height = y;
}

int main()
{
    rect.set_values(10, 20);
    cout << "Area is " << rect.area() << endl;
    Rectangle r2 (3, 10);
    cout << "Area 2 is " << r2.area();
}

int Rectangle::area()
{
    return height * this->width;
}