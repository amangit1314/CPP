
#include <bits/stdc++.h>
using namespace std;

class base{
    public:
    void print(){
        cout << "this is the base class's print function" << endl;
    }

    void display(){
        cout << "this is the base class's display function" << endl;
    }
};

int main(){
    base b;
    b.print();
    b.display();
    return 0;
}