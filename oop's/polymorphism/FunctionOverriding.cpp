//Virtual Function or Runtime Binding these are all its names

#include <bits/stdc++.h>
using namespace std;

class base{
    public:
    virtual void print(){
        cout << "this is the base class's print function" << endl;
    }

    void display(){
        cout << "this is the base class's display function" << endl;
    }
};

class derived: public base{
    public:
    void print(){
        cout << "this is the derived class's print function" << endl;
    }

    void display(){
        cout << "this is the derived class's display function" << endl;
    }
};

int main(){
    base *base_ptr;
    derived d;

    base_ptr = &d;

    base_ptr->print();
    base_ptr->display();

}