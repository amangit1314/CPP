#include<bits/stdc++.h>
using namespace std;

int swap(int n1, int n2){

    cout << "Two numbers before swapping: " << "n1 = "<< n1 << " " <<"n2 = "<< n2 <<endl;

    int temp =0;
    temp = n1;
    n1 = n2;
    n2 = temp;

    cout<< "Two numbers after swapping: " << "n1 = "<< n1 << " " << "n2 = "<< n2 <<endl;
}

int32_t main(){

    int n1, n2;
    cin>>n1;
    cin>>n2;

    swap(n1,n2);

    return 0;
}