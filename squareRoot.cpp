#include <iostream>
#include <cmath>

using namespace std;
int main(void) 
{
	float value, squareRoot;
	cout<< "Give me a positve number and I will find the square root:"<<endl;
	cin >> value;
	if(value>0)
	{
		squareRoot = sqrtf(value);
		cout << "The square root of "<<value<<" is "<<squareRoot<<endl;
	} 
	else 
	{
		cout<<"That is not a positive number..."<<endl;
	}

	return 0;
}