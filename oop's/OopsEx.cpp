#include <bits/stdc++.h>
using namespace std;

class code
{
    int id;

public:
    //Default Constructor
    code() {}

    //Parameterized Constructor
    code(int a)
    {
        id = a;
    }

    //Copy Constructor
    code(code &x)
    {
        x.id = id;
    }

    void display()
    {
        cout << id;
    }
};

int main(int argc, char const *argv[])
{
    code A(100); //Object A is created & initialized
    code B(A);   //Copy Constructor Called
    code C = A;  //Copy Constructor Called Again
    code D;      //D is created not initialized
    D = A;       //Copy Constructor not called

    cout << "id of A : ";
    A.display();
    cout << endl;

    cout << "id of B : ";
    B.display();
    cout << endl;

    cout << "id of C : ";
    C.display();
    cout << endl;

    cout << "id of D : ";
    D.display();

    return 0;
}
