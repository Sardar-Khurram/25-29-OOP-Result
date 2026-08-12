//class template calculator
#include <iostream>
using namespace std;
template <typename T>

class Calculator {
	private:
		T a, b;
	public:
		Calculator (T x , T y)           // constructor
		{
			a = x;
			b = y;
		}
		
		T add()              
		{ return a+b; }
		
		T subtract()         
		{ return a-b;}
		
		T multiply()
		{ return a*b; }           
};

int main()
{
	//test for integer
	Calculator <int> C1(10,5);
	cout << "For int 10 , 5:"<< endl;
	cout << "Addition = " << C1.add() << endl;
	cout << "Subtraction = " << C1.subtract() << endl;
	cout << "Multiplication = " << C1.multiply() << endl;
	
	// test for double
	Calculator <double> C2(6.4,10.8);
	cout << "\nFor double 6.4 , 10.8:" << endl;
	cout << "Addition = " << C2.add() << endl;
	cout << "Subtraction = " << C2.subtract() << endl;
	cout << "Multiplication = " << C2.multiply() << endl;
	
	return 0;
}
