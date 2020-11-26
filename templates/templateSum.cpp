#include<iostream>
using namespace std;

template<typename t>
t add(t num1, t num2){
    return (num1 + num2);
}

int main(){
    double result;
    result = add<double>(1,4);
    cout<<"1 + 4 = "<<result<<endl;
    return 0;
}