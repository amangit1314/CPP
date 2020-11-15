#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char *argv[]){
    int n = argc;
    cin>>n;

    int sum = 0;
    int original_no = n;

    while(n>0){
        int last_digit = n % 10;
			sum += pow(last_digit,3);
			n = n/10;
    }

   if(sum == original_no)   cout<<"Armstrong Number\n";
   else                     cout<<"Not Armstrong\n";
   
}