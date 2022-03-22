#include <iostream>

using namespace std;

class Penguin {
public:
    int age;
    Penguin(int a) : age(a) {}
    Penguin(Penguin&&); // move constructor. May never get called because of Return Value Optimization.
    Penguin& operator= (Penguin&&); // move assignment
    Penguin operator+ (Penguin&);
    Penguin() = default;
    ~Penguin() = default;
};

Penguin::Penguin(Penguin&& other_penguin) : age(other_penguin.age)
{
    cout << "move constructor called, other has " << other_penguin.age << endl;  
}

Penguin Penguin::operator+(Penguin& other_penguin)
{
    return Penguin { this->age + other_penguin.age };
}

// rpenguin is the rvalue reference Penguin denoted using type Penguin&&
Penguin& Penguin::operator=(Penguin&& rpenguin)
{
    cout << "move assignment called, rvalue " << rpenguin.age << endl;
    return rpenguin;
}


Penguin create_penguin()
{
    Penguin p { 30 };
    return p;
}

int main()
{
    Penguin p0;
    cout << "p0 default " << p0.age << endl;
    Penguin p1 = Penguin { 4 };
    cout << "p1 age "  << p1.age << endl;
    Penguin p2 = create_penguin();
    cout << "p2 age "  << p2.age << endl;
    Penguin sum_p = p1 + p2;
    cout << "sum penguin is " << sum_p.age << endl;


}