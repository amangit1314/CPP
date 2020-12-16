#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a, b;
	
	cin>>a;
	cin>>b;

	int x = a - b;

	try
	{
		if(x != 0)
			cout<<" Result(a/x) = " << a/x << endl;
			
		else
			throw(x);
	}

	catch(int i){
		cout<<"Exception Caught: x = " << x <<endl;
	}

	//For multiple try and catch cases
	catch(...){
		cout << "Unusual Excepetion!";
	}

	cout << "End";
	return 0;
}

