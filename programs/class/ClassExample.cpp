#include<iostream>
using namespace std;

class ClassExample
{
private:
    int val;
public:
    void init_val(int v);
    void print_val();
};

void ClassExample::init_val(int v){
    val = v;
}
void ClassExample::print_val(){
    cout<<"value"<<val<<endl;
}

int main(){
    ClassExample Ex;         //create object
	Ex.init_val(100);
	Ex.print_val();
	return 0;
}

