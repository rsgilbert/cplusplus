#include <iostream>

using namespace std;

class Product
{
private:
    double price;
    double qty;
    string description;

public:
    Product(string desc, double qty, double price);
    Product operator+(const Product &other);
    void report();
    double get_qty(){ return this->qty; }
    bool isitme(const Product &other){
        return this == &other;
    }
    Product operator=(const Product &other);
};

Product::Product(string desc, double qty, double price)
    : description(desc), qty(qty), price(price) {}

void Product::report()
{
    cout << "Description    |Quantity   |Price  |" << endl;
    cout << this->description << "  |" << this->qty << "    |" << this->price << "  |" << endl;
}

Product Product::operator+(const Product &other)
{
    Product result { 
        this->description + ", " + other.description,
        this->qty + other.qty,
        this->price + other.price
    };
    return result;
}

Product Product::operator=(const Product &other)
{
    this->qty = other.qty;
    this->price = other.price;
    this->description = other.description;
    return *this;
}

double operator+(double x, Product p)
{
    return x + p.get_qty();
}

double operator+(Product p, double x)
{
    return x + p.get_qty();
}

int
main()
{
    Product p1 { "Nile Special", 1, 3500 };
    p1.report();

    Product p2 { "Lemon joice", 2, 1000 };
    p2.report();
    Product bothProducts = p1 + p2;
    bothProducts.report();

    int m = 5;
    int sum = m +  p1;
    cout << "sum is " << sum << endl;
    cout << p2.isitme(p1) << endl;
    cout << p1.isitme(p1) << endl;

    Product p1Copy { "Will copy you", 5, 5};
    p1Copy.report();
    p1Copy = p1;
    p1Copy.report();

} 