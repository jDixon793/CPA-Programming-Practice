#include <iostream>
using namespace std;

int main(void) {
	int rows, cols;
	string ** array;
	
	cout<<"Enter num rows: ";
	cin>>rows;
	cout<<"Enter num cols: ";
	cin>>cols;
	
	array = new string * [rows];
	for(int i =0;i<rows;i++)
	{
		array[i] = new string[cols];
	}
	
	for(int x=0;x<rows;x++)
	{
		for(int y=0; y<cols;y++)
		{
			array[x][y] = to_string(x) +""+to_string(y);
			cout<<array[x][y] <<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
