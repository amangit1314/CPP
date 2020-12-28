#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int a[], int n){
    for(int i = 0; i <= n - 1; i++){
        for(int j = 0; j <= n - 1 - 1; j++){
            if(a[j + 1] < a[j])
                swap(&a[j], &a[j + 1]);
        }
    }
}

void printArray(int a[], int n){
    for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main(){

	int a[] = {1,5,7,9,8,6,4,2};
    int n = sizeof(a)/sizeof(a[0]);
	bubbleSort(a, n);
    cout << "Sorted Array: \n";
	printArray(a, n);

    return 0;
}