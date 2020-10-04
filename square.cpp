#include <iostream>
using namespace std;
int main(void) 
{
	int value, square;
	cout<< "Give me a number and I will square it:"<<endl;
	cin >> value;
	square = value * value;
	cout << "The square of "<<value<<" is "<<square<<endl;
	return 0;
}