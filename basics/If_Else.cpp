#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int savings = argc;

    if(savings > 5000)
        cout<<"Neha\n";
    else if(savings < 500)
        cout<<"Rashmi";
    else
        cout<<"Friends";
}