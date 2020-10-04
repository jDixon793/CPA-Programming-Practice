/*
This program explains the basic anatomy of a simple program.
Oct 4 2020
*/

#include <iostream>	//signals the pre-processor to include the file contents of iostream (which contains input and output streams)

using namespace std; //tells the compiler that we will be using things from the std namespace
					 //allows us to use cout instead of std::cout

int main()			//a special function that the compiler executes when run
{
	cout << "Hello World!" << endl;	//inserts the string "Hello World" and a newline with carriage return to the output stream
	return 0;						//ends the program and returns 0 which represents a success run
}