#include <iostream>

using namespace std;

// Const member functions

class Tree
{
private:
    int height = 0;
public:
    // static int width;
    void grow();
    int get_height() const;
    int get_height();
    const int& get_h();
    void compare_heights(const Tree &tother);
};

void Tree::grow() { height++; }

// const members may not modify the state of an object
int Tree::get_height() const {
    // width = 4;
    
    cout << "called in const" <<endl;
     return height; 
}

int Tree::get_height() {
    // width = 4;
    cout << "called in non-const" <<endl;
     return height + 5; 
}

const int& Tree::get_h()  { 
    height = 5;
    return height;
}

void Tree::compare_heights(const Tree &tother)
{
    if(this->height > tother.get_height())
    {   
        cout << "this tree is taller";
    }
    else cout << "Other tree is taller";
    cout << endl;
}

int main()
{   
    Tree t0;
    t0.grow();
    Tree t1;
    t1.grow();
    t1.grow();
    t1.compare_heights(t0);
    t0.grow();
    t0.grow();
    t1.compare_heights(t0);
    t1.get_height();

    // Tree t2;
    // const int& h = t2.get_h();
    // const int *h_addr = &h;// &t2.get_h();
    // *h_addr = 4;
    // cout << h << "#" <<&h<< "#" << "#" <<&t2.get_h()<< "#"<< t2.height << endl;

    // const Tree tr1;
    // // tr1.grow();
    // int h = tr1.get_height();
    // h++;
    // h = 8;




    // cout << h << tr1.height << tr1.get_height() << endl;
    // tr1.grow();
    // cout << tr1.get_height() << endl;
}