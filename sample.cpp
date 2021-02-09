#include<bits/stdc++.h>
using namespace std;

class printData{
    public:
    void print(int i){
        cout << "Printing int:" << i << endl;
    }

    void print(double f){
        cout << "Printing float:" << f << endl;
    }

    void print(char* c){
        cout << "Printing character: " << c << endl;
    }
};

int main(int argc, char const *argv[])
{
    printData pd;
    pd.print(5);
    pd.print(4.1);

    return 0;
}
