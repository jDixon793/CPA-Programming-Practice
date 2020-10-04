#include <iostream>
using namespace std;
void Greeting(string greet = "Hello", int nums = 1)
{
	for(int i=0;i<nums;i++)
	{
		cout<<greet<<endl;
	}
}

void PlayWithNumbers(int i){cout<<"int\n";}
void PlayWithNumbers(float i){cout<<"float\n";}
void PlayWithNumbers(long i){cout<<"long\n";}
void PlayWithNumbers(double i){cout<<"double\n";}

int main(void) {
	Greeting();
	PlayWithNumbers(1);		//int
	PlayWithNumbers(1.0);	//double
	PlayWithNumbers(1.0F);	//float
	PlayWithNumbers(2L);	//long
	return 0;
}
