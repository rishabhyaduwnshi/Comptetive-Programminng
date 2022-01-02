// C++ program to demonstrate __builtin_popcount()

//PopCount is a inbuilt function which return the no of set bits in a given integer

#include <iostream>
using namespace std;

int main()
{
	cout << __builtin_popcount(4) << endl;
	cout << __builtin_popcount(15);

	return 0;
}
