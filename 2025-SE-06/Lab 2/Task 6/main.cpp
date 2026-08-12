#include <iostream>
#include <string>
#include "Student.h"
#include "Rectangle.h"
#include "Temperature.h"
#include "Voter.h"
#include "Calculator.h"

using namespace std;

int main() 
{
    //object for student
	Student S1;
	S1.getData();
	S1.displayData();
	//object for rectangle
	Rectangle R1;
	R1.setDimensions();
	R1.area();
	R1.perimeter();
	//object for temperature
	Temperature T1;
	cout << "\n===Temperature Class===" << endl;
	cout << "Enter temperature in celsius: ";
	cin >> T1.celsius;
	T1.conversionTemp();
	T1.displayTemp();
	//object for voter
	Voter V1;
	cout << "\n===Voter Class===" << endl;
	cout << "Enter name of voter: ";
	cin >> V1.name;
	cout << "Enter age of voter: ";
	cin >> V1.age;
	if (V1.isEligible()==1)
	{
		cout << V1.name << " is eligible to vote." << endl;
	}
	else
	{
		cout << V1.name << " is not eligible to vote." << endl;
	}
	//object for calculator
	Calculator myNum;
	char choice;
	cout << "\n===Calculator Class===" << endl;
	cout << "Enter two numbers: " << endl;
	cin >> myNum.num1 >> myNum.num2;
	cout << "Choose operation from following : "
	    << "\n + for addition."
		<< "\n - for subtraction."
		<< "\n * for multiplication."
		<< "\n / for division." << endl;
    cin >> choice;
    switch(choice)
    {
    	case '+':
    		myNum.add();
    		break;
    	case '-':
    		myNum.subtract();
    		break;
    	case '*':
    		myNum.multiply();
    		break;
    	case '/':
    		myNum.divide();
    		break;
    	default:
    		cout << "Invalid choice." << endl;
	}
	return (0);
}
