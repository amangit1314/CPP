#include<iostream>
using namespace std;

char detect(char character){
    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
	{
		cout<<character<<" is an alphabet";
	}
	else
	{
		cout<<character<<" is not an alphabet";
	}
}

int main(){

    char character;
    cin>>character;

    detect(character);

    return 0;
}