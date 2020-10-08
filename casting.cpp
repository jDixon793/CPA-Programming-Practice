#include <iostream>
using namespace std;

int main(void) {
	int maxInt = 2147483647;
	short smollMemory;
	smollMemory = maxInt;
	cout<<smollMemory<<endl;	//outputs -1 because all the bits are on that are preserved and all 1s in 2s complement is -1
	
	int smallInt = 365;
	smollMemory = smallInt;
	cout<<smollMemory<<endl;	//outputs 365 because that fits nicely in a short
	
	//floats and int have the same size but because of the way floats work you can still lose some precision
	float f = 123.456,g = 1e100;
	int i = f;
	int j = g;
	cout<<f<<" "<<i<<endl;
	cout<<g<<" "<<j<<endl;
	
	//I hate these var names but that's what the course used
	int Int =2; char Char =3; short Short =4; float Float = 5.5;
	Int = Short + Char + Float;
	//int(double((int(Short)+int(Char))+ double(Float)))
	//Short and Char are cast up to Int 
	//Float is cast up to double
	//Since we have a double in the equation, all other data is converted to double
	//Since the equation assignment is to an int, the result is cast to an int
	cout<<Int<<endl;
}
