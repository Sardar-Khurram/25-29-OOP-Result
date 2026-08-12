//template function that returns the smaller value
#include <iostream>
using namespace std;

template <typename T>
T findMin(T a , T b)
{
	if (a < b) 
	{ return a; }
	else 
	{ return b; }
}

int main ()
{
	cout << "--Template testing that returns smaller value--" << endl;
	
	int x = 5, y = 9;
	cout << "\nTesting for integer:" << endl;
	cout << "Min of " << x << " and " << y << " = " << findMin(x,y) << endl;
	
	double c=11.5 , d=5.9;
	cout << "\nTesting for double:" << endl;
	cout << "Min of " << c << " and " << d << " = " << findMin(c,d) << endl;
	
	char ch1 = 'z' , ch2 = 'y';
	cout << "\nTesting for characters:" << endl;
	cout << "Min of " << ch1 << " and " << ch2 << " = " << findMin(ch1,ch2) << endl;
	
	return 0;
}
