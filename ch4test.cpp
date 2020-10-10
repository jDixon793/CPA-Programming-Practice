#include <iostream>
using namespace std;

namespace S
{
	int A =1;
}
namespace S
{
	int B = A+2;
}

int main()
{
	//1
	{
		char t[3][3], *p = (char *) t;	//t is of type char *[3] before cast
		for(int i=0;i<9;i++)
			*p++ = 'a' + i;		//iterates throught the 2d array memory which goes in ordergoing in order [0][0]->[0][1]
		cout<< t[1][1]<<endl; //prints 
	}
	//2
	{
		float *ft[3] = {new float[4],new float[4],new float[3]}, *p;
		for(int i =0;i<3;i++)
		{
			//ticky pointer element access
			p = ft[i];
			*p = 		//refers to the 0th element in p( which was just assigned ft[i])
			p[1] = 		//refers to the 1st element in p
			*(p+2) 		//refers to the 2nd element in p
			= 10 * i;	//the value to assign to all those elements
			

			
		}
		cout<<ft[1][1]<<endl;	//prints 10
		delete [] ft[0];
		delete [] ft[1];
		delete [] ft[2];
	}
	//3
	{
		short s =1;
		int i =2;
		long l =3;
		float f = 4.4;
		double d = 6.6;
		
		cout<< s/i //1/2 is 0, because of integer division
		+ f/i 		//4.4/2.0 is 2.2, does float division
		+ d/s		//6.6/1.0 is 6.6
		<<endl;		//prints 8.8
	}
	//4
	{
		int i =2;
		float f = 4.4;
		
		//cout<<f%float(i)<<endl;
		//Compilation fails % requires integers
	}
	//5
	{
		string s = "a";
		cout<< s+"b"+"c"<<endl;	//prints abc
	}
	//6
	{
		string s1="ab", s2 = "Abc";
		if(s1>s2)
			cout<<"yes"<<endl;	//prints yes
		else
			cout<<"NO"<<endl;
	}
	//7
	{
		string s1= "Ab", s2 = "Abc";
		cout<<s1.compare(s2)<<endl;	//prints -1
	}
	//8
	{
		string s = "0123456789";
		cout<<s.substr(3,7).substr(2).substr()<<endl;	//prints 56789
	}
	//9
	{
		//not writing out the whole thing here but you can't put two namespaces next to each other like this.
		//they need to be seperate statements
		//using namespace SpaceA, SpaceB;
		//also you can't use 2 namespaces that have conflicting var names
		
	}
	//10
	{
		//namespace definitions have to be outside the main so i put them there but ill comment them here for ease of reading
		/*
		namespace S
		{
			int A =1;
		}
		namespace S
		{
			int B = A+2;
		}
		*/
		S::A = S::A +1;
		{
			using namespace S;
			++B;
		}
		cout<< S::B <<S::A<<endl;	//prints 42
	}
	return 0;
}