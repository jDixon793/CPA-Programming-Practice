#include <iostream>
using namespace std;

//the name DESSERTS is optional but then we are stuck with only cookie and cake, we cannot create a new var if we don't name the struct
struct DESSERTS{
	int cals;
}cookie, cake;

struct MEAL{
	float mealTime;
	DESSERTS sweets;
};

int main(void) {
	cout<< sizeof(float *)<<endl<<sizeof(float)<<endl<<sizeof(double);
	cout<< "wat"<<endl;
	short int smoll;
	long int chungus;
	unsigned int positive;
	int i = 17;
	bool aBool = true;
	aBool != aBool;
	cout<<"Hello?"<<aBool<<endl;
	cout<<i<<endl;
	int inceptionArray [2][2][2][2][2][2][2][2][2][2];//when I put 10s we ran out of memory lolz
	inceptionArray[1][1][1][1][1][1][1][1][1][1] = 69;
	cout<< inceptionArray[1][1][1][1][1][1][1][1][1][1] << endl;
    DESSERTS brownie;
	struct DESSERTS iceCream {250};
	struct {bool hasStuff;int numStuff;} nothing{true,3};
	brownie.cals =300;
	cookie.cals = 1000;
	cout<<iceCream.cals<<endl;
	cout<<true<<endl;
	int var =4;
	cin>>var;
	cout<<endl;
	int array[var];
	array[var-1]=4;
	//array = new int[5];
	cout <<array[var-1]<<endl;
	return 0;
}
