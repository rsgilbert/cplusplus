#include <iostream>


using namespace std;

class Circle {
    double radius;
public:
    Circle(void);
    Circle(double);
    double area();
    void set_radius(double);
};

Circle::Circle(void)
{
    radius = 0;
}

Circle::Circle(double r)
{
    this->radius = r;
}

double Circle::area()
{
    return 3.14 * this->radius * this->radius;
}

void Circle::set_radius(double r)
{
    this->radius = r;
}

int main()
{
    // Functional declaration. Uses parentheses. Default 
    // constructor not called
    Circle c1 (3);
    cout << "Circle area is " << c1.area() << endl;
    Circle c2;
    c2.set_radius(4);
    cout << "Circle c2 area is " << c2.area() << endl;

    // Variable initialization syntax for constructors with a single parameter.
    Circle c3 = 2;
    cout << "Circle c3 area is " << c3.area() << endl;

    // Uniform initialization. Uses braces {} instead of parentheses () 
    Circle c4 = { 5 };
    cout << "Circle c4 area is " << c4.area() << endl;

}