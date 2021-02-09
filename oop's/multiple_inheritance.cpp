#include<bits/stdc++.h>
using namespace std;

class base{
    public:
    void hello(){
        cout << "b";

    }
};

class de:private base{
};
int main(){
    de d;
    d.hello();
    return 0;
}
    


