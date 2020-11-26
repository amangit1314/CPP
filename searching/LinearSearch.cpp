#include<iostream>
using namespace std;

//ye hai array a[] = {1, 2, 3, 4}.
int linearSearch(int a[] , int n , int key){

    for(int i = 0 ; i < n ; i++){
        if(a[i] == key)
            return i;
    }
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
         cin>>a[i];
    }

    int key;
    cin>>key;

    cout<< "element position = " << linearSearch(a , n , key)<<endl;
    return 0;
}