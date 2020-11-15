#include<iostream>
using namespace std;

int maxOf(int n1 , int n2 , int n3){

    if(n1 > n3){
        if(n1 > n2)
            cout<<n1<<" "<<"is maximum"<<endl;
        else
            cout<<n2<<" "<<"is maximum"<<endl;
    }
    
    else if(n2 > n1){
        if(n2 > n3)
            cout<<n2<<" "<<"is maximum"<<endl;
        else
            cout<<n3<<" "<<"is maximum"<<endl;
    }
    
    else
        cout<<n3<<" "<<"is maximum"<<endl;
}

int minOf(int n1 , int n2 , int n3){

    if(n1 < n3){
        if(n1 < n2){
            cout<<n1<<" "<<"is minimum"<<endl;
        }else{
            cout<<n2<<" "<<"is minimum"<<endl;
        }
    }
    
    else if(n2 < n1){
        if(n2 < n3)
            cout<<n2<<" "<<"is minimum"<<endl;
        else
            cout<<n3<<" "<<"is minimum"<<endl;
    }
    
    else
        cout<<n3<<" "<<"is minimum"<<endl;
}

int main(){

    int n1;
    int n2;
    int n3;

    cin>>n1;
    cin>>n2;
    cin>>n3;

    maxOf(n1,n2,n3);
    minOf(n1,n2,n3);

    return 0;
}