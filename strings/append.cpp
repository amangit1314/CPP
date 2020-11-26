#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str1 = "fam";
    string str2 = "ily";

    //Method 1
    str1.append(str2);
    cout<<str1<<endl;

    //Method 2
    string str3 = "fam";
    cout<<str3+str2<<endl;

    //Method 3
    string final;
    final = str1 + str2; 
    cout<<final<<endl;

    return 0;
}