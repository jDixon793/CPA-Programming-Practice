/*
This program explores the various types
Oct 4 2020

en.cppreference.com/w/cpp/language/types
*/

#include <iostream>
using namespace std;
int main(void) {
	char aLetter;			//char is the smallest at 1 byte
	unsigned char bLetter;	//positive only char
	signed char cLetter;	//legal but same as char
	
	int a;					//signed by default
	signed int b;			//same as above
	signed s;				
	unsigned int c;
	unsigned us;
	//you can include int after the short and long types but it is implied
	
	short int smoll;		//bigger than char
	short alsoSmoll;		//legal same as above
	signed short posSmoll;  //same as above
	unsigned short bSmoll;	//only positive numbers allows higher numbers.
	
	long int chungus;
	unsigned int positive;
	
	long long l;
	
	//long long long tooLong;	//too long for most compilers and is not a suported data type
	

	float f;
	double d;
	long double ld;
	//double double dd;			//not a type
	//signed and unsigned doesn't make since for float numbers
	return 0;
}
