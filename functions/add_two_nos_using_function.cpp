#include<iostream>
using namespace std;


int add(int i, int j){
    int sum = i + j;
    return sum;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
}