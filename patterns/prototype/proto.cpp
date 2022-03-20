#include <iostream>
#include <unordered_map>

using namespace std;

/**
 * @brief Prototype design pattern.
 *  Intent: lets you copy existing objects without making 
 * your code dependent on their classes.
 */

enum Type {
    PROTOTYPE_1 = 0,
    PROTOTYPE_2 
};


/**
 * @brief The example class that has cloning ability. We'll see how
 * the values of field with different types will be clones
 * 
 */

class MyPrototype {
    protected:
        string prototype_name_;
        float prototype_field_;

    public:
        MyPrototype(){}
        MyPrototype(string prototype_name) 
            : prototype_name_(prototype_name) {
        }
        virtual ~MyPrototype(){}
        virtual MyPrototype *Clone() const = 0;
        virtual void hello(float prototype_field) {
            this->prototype_field_ = prototype_field;
            cout << "Called hello from prototype " << this->prototype_name_  
                << " with field " << prototype_field
                << endl;
            
        }
};

class MyConcretePrototype : public MyPrototype {
    private:
        float concrete_field1_;
    public:
        MyConcretePrototype(string prototype_name, float concrete_field)
        : MyPrototype(prototype_name), concrete_field1_(concrete_field) {
        }

        /*
        * Notice the Clone method returns a pointer to a new MyConcretePrototype
        * replica so the client who called the clone method has the responsibility
        * to free that memory. You may prefer to use unique_pointer here.
        */
        MyPrototype *Clone() const override {
            return new MyConcretePrototype(*this);
        }
};

class MySecondConcretePrototype : public MyPrototype {
    private:
        float conc_field2_;
    public:
        MySecondConcretePrototype(string prototype_name, float conc_field)
            : MyPrototype(prototype_name), conc_field2_(conc_field){}
        MyPrototype *Clone() const override {
            return new MySecondConcretePrototype(*this);
        }
};

/**
 * @brief In PrototypeFactory you have two concrete prototypes, one for each concrete
 * prototype class, so each time you want to create a bullet, you can use the 
 * existing ones and clone those.
 * 
 */
class MyPrototypeFactory {
    private:
        std::unordered_map<Type, MyPrototype *, hash<int>> prototypes_;

    public:
        MyPrototypeFactory(){ 
            prototypes_[Type::PROTOTYPE_1] = new MyConcretePrototype("PROTOTYPE_1 ", 50.0f);
            prototypes_[Type::PROTOTYPE_2] = new MySecondConcretePrototype("PROTOTYPE 2", 60.0F);
        }

        /*
        * Be careful to free all memory allocated. You can use smart pointers if you know.
        */
       ~MyPrototypeFactory() {
           delete prototypes_[Type::PROTOTYPE_1];
           delete prototypes_[Type::PROTOTYPE_2];
       }


       /* Notice here that you just need to specify the type of prototype
       you want and the method will create from the object with this type
       */
      MyPrototype *CreatePrototype(Type type) {
          return prototypes_[type]->Clone();
      }

};

void Client(MyPrototypeFactory &prototype_factory)
{
    cout << "Lets create a prototype\n";
    MyPrototype *prototype = prototype_factory.CreatePrototype(Type::PROTOTYPE_1);
    prototype->hello(20);
    delete prototype;

    cout << endl;
    cout << "Lets create a second prototype " << endl;
    prototype = prototype_factory.CreatePrototype(Type::PROTOTYPE_2);
    prototype->hello(2.0F);
    delete prototype;
}

int main()
{
    MyPrototypeFactory *prototype_factory = new MyPrototypeFactory();
    Client(*prototype_factory);
    delete prototype_factory;
    return 0;
}