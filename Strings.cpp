#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string name("James Dixon");
	/*
	cout<<name+1+" is the best"<<endl;
	mad compiler, cannot concatenate a string and an int
	*/
	cout<<"I am the best "+name<<endl;	//a literal and a string var can be concatenated
	/*
	cout<<"I am " +"the best "+name<<endl; 
	mad compiler 2 literals cannot be concatenated b/c the compiler doesn't know that 
	they are strings. The compiler sees them as const char arrays.
	*/
	cout<<"I am " +string("the best ")+name<<endl;
	//because the second literal is cast to a string, the compiler is happy and can concatenate
	
	//short cut operation works fine with concatenation.
	name+= " is the best!";
	cout <<name<<endl;
	
	string S = "ABC";
	cout << S.compare(1,1,"BC")<<endl;		//returns -1
	cout << S.compare(2,7777,S,2,345)<<endl; // returns 0 
	
	string z="Z",a="A";
	cout<<int('A')<<" - " << int('Z')<< " = " << a.compare(z)<<endl;//-1
	cout << int('Z')<<" - " << int('A')<< " = " <<z.compare(a)<<endl;//1
	
	string aString("James Dixon");
	aString.resize(15);
	cout<<aString<<'.'<<endl;
	
}
