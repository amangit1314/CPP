#include<iostream>
using namespace std;

int nRaisep(int n, int p){
    if(p == 0)
        return 1;
    return n*nRaisep(n,p-1);
}

int main(){
    cout<<nRaisep(3,4);
    return 0;
}