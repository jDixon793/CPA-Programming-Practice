/*
Bubble Sort is one of the most basic and inefficent sorts.
Checks each number and its neighbor to see if they are in order, if not swap them.
When no more swaps are made the sort is complete.
*/
#include <iostream>
using namespace std;

int main(void) {
	//initilization
	int numbers[] = {5,4,3,2,1};
	bool swapWasMade;
	int numPasses =0;
	int numSwaps =0;
	
	
	//Bubble Sort
	do{
		swapWasMade = false;
		numPasses++;
		for(int i=0;i<5;i++)
		{
			if(numbers[i] > numbers[i+1])
			{
				swapWasMade = true;
				numSwaps++;
				
				int temp = numbers[i];
				numbers[i] = numbers[i+1];
				numbers[i+1] = temp;
			}
		}
	}while(swapWasMade);
	
	
	//output
	for(int i=0;i<5;i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<endl;
	cout<<"Sorted in "<<numPasses<<" passes and "<<numSwaps<<" swaps."<<endl;
}
