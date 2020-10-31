#include<iostream>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int x = 1;

    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 2;
        n/= 10;
    }

     cout<<ans;
    return ans;
}

int main(){
    int n;
    cin>>n;

    binaryToDecimal(n);
    return 0;
}