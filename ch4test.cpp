#include <iostream>
using namespace std;

int main()
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
		for(int x=0;x<3;x++)
		{
			for(int y =0;y<3;y++)
				cout<<ft[x][y]<<" ";
			cout<<endl;
		}
		cout<<ft[1][1];
		delete [] ft[0];
		delete [] ft[1];
		delete [] ft[2];
		return 0;
}