#include <iostream>
using namespace std;

int stack[100];
int topOfStackPointer =0;

void push(int value)
{
	stack[topOfStackPointer++] = value;
}

int pop()
{
	return stack[--topOfStackPointer];
}


int main()
{
	push(3);
	push(2);
	push(1);
	cout<< pop()<<" "<< pop()<<" "<< pop()<<endl;
	return 0;
}