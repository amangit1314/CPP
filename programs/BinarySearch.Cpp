#include<iostream>
using namespace std;

int binarySearch(int A[], int l, int r, int x){
    
    while(1<= r){
        int m = 1+(r-1)/2;
        if(A[m] == x)   return m;

        if(A[m] < x)    l = m+1;
        else    r= m-1; 
    }
    return -1;
}

int main(void){
    int A[] = {2,4,3,10,40,49,54,73};
    int x = 73;
    int n = sizeof(A)/sizeof(A[0]);
    int result = binarySearch(A, 0, n-1, x);
    (result == -1) ? cout<< "Element is not present in array" : cout<< "Element is present at index " << result;

    return 0;

}