//Constructor in Derived class with arguments
#include <iostream>
using namespace std;
class papa{
    int p;
    public:
        papa(int i){
            p = i;
            cout << "papa initialized" << "\n";
        }

        void show_a(){
            cout << "p = " << p << "\n";
        }
};

class mummy{
    float m;
    public:
        mummy(float f){
            f = m;
            cout << "mummy initialized" << "\n";
        }

        void show_m(){
            cout << "m = " << m << "\n";
        }

};

class aman : public papa, public mummy{
    int b, n;
    public:
        aman(int w, float x, int y, int z) : papa(p), mummy(m){
            b = y;
            n = z;
            cout << "aman initialized";
        }

        void show_bn(){
            cout << "b = " << b << "\n" << "n = " << n << endl;
        }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}
