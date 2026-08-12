//template function that prints value twice
#include <iostream>
using namespace std;
template <typename T>
void printTwice(T val)
{
	cout << val << endl;
	cout << val << endl;
}

int main()
{
	cout << "--Template function testing that prints twice value--" << endl;
	cout << "\nTemplate testing with integer." << endl;
	printTwice(10);
	
	cout << "\nTemplate testing with double." << endl;
	printTwice(15.6);
	
	cout << "\nTemplate testing with string." << endl;
	printTwice("Hello World.");
	
	return 0;
}
