#include <iostream>
using namespace std;
class Calculator{
	public:
		float num1;
		float num2;
		void add()
		{
			cout << "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
		}
		void subtract()
		{
			cout << "Subtraction of " << num1 << " and " << num2 << " is " << num1-num2 << endl;
		}
		void multiply()
		{
			cout << "Multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
 	    
		}
		void divide()
		{
			if (num2!=0)
			{
				cout << "Division of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
			}
			else
			{
				cout << "Error! Division by zero is invalid." << endl;
			}
		}
};
int main()
{
	Calculator myNum;
	char choice;
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
