//Task 5 Calculator
#include<iostream>
using namespace std;
class Calculator
{
	public:
	//data members
	float num1;
	float num2;
	Calculator (float n1, float n2)
	{
		num1 = n1;
		num2 = n2;
	}
	//member functions
	float add();
	float substract();
	float multiply();
	float divide();
};
float Calculator::add()
	{
		cout << "Addition: " << num1+num2 << endl;
	}
float Calculator::substract()
	{
		cout << "Substraction: " << num1-num2 << endl;
	}
float Calculator::multiply()
	{
		cout << "Multiplication: " << num1*num2 << endl;
	}
float Calculator::divide()
	{
		if(num2>0)
		{
			cout << "Division: " << num1/num2 << endl;
		}
		else
		{
			cout << "Division of number less than zero is not possible. Try again!" << endl;
		}
	};

