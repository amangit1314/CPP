#include <iostream>
using namespace std;

int count = 0;
class alpha
{

public:
    alpha()
    {
        count++;
        cout << "\n No. of object created " << count;
    }

    ~alpha()
    {
        cout << "\n No. of object destroyed " << count;
        count--;
    }
};

int main(int argc, char const *argv[])
{
    cout << "Enter Main" << endl;
    alpha A1, A2, A3, A4;
    {
        cout << "\n\n Enter Block 1\n";
        alpha A5;
    }

    {
        cout << "\n\n Enter Block 2\n";
        alpha A6;
    }

    cout << "\n\n Re-Enter main\n";
    return 0;
}
