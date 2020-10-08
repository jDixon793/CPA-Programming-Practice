#include <iostream>
using namespace std;

int main(void) {
	long long ll;
	cout << "This computing environment uses:" << endl;			
    cout << sizeof(char) << " bytes for chars" << endl;			//1
    cout << sizeof(short int) << " bytes for shorts" << endl;	//2
    cout << sizeof(int) << " bytes for ints" << endl;			//4
    cout << sizeof(long int) << " bytes for longs" << endl;		//8
	cout << sizeof(ll) << " bytes for long longs" << endl;		//8
    cout << sizeof(float) << " bytes for floats"  << endl;		//4
    cout << sizeof(double) << " bytes for doubles"  << endl;	//8
    cout << sizeof(bool) << " byte for bools" << endl;			//1
    cout << sizeof(int *) << " bytes for pointers" << endl;		//8
	int var =0;
	int var2 = sizeof(var) ;
	cout<<var2<<endl;
	return 0;
}
