#include <iostream>

using namespace std;

// conceptual example 

/**
 * @brief The product interfaces declares the operations that
 * all concrete products implement
 * 
 */
class Product {
    public:
        virtual ~Product(){}
        virtual string describe() const = 0;
};

/* Concrete products. 
*/
class ElectronicProduct : public Product {
    public:
        string describe() const override {
            return "This is a great electronic product";
        }
};

class OrganicProduct : public Product {
    public:
        string describe() const override {
            return "This is organic and made from the farm.";
        }
};


/* Creator class describes the factory method that 
is supposed to return an object of a product class 
The creators subclass provide implementation of the factory method.
*/

class ProductCreator {
    // The creator may also provide a default implementation of the factory method
    public:
        virtual ~ProductCreator(){};
        virtual Product* createProduct() const = 0;
        void advertise() const {
            Product* product = this->createProduct();
            string result = product->describe();
            cout << result << endl;
            delete product;
        }
};

/** Concrete creators override the factory method
 * inorder to change the resulting product type 
 * */
class ElectronicCreator : public ProductCreator {
    public:
        Product* createProduct() const override {
            return new ElectronicProduct();
        };
};

class OrganicCreator : public ProductCreator {
    public:
        Product* createProduct() const override {
            return new OrganicProduct();
        }
};


int main()
{
    cout << "App: Launched" << endl;
    ProductCreator* creator = new ElectronicCreator();
    creator->advertise();
    creator = new OrganicCreator();
    creator->advertise();

}