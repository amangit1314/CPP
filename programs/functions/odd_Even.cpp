#include<iostream>
using namespace std;

int check(int n){
        if(n % 2 == 0){
            cout<<"Even"<<endl;
        }else{
            cout<<"Odd"<<endl;
        }
}

int main(){

    int n;
    cin>>n;

    check(n);
    
}