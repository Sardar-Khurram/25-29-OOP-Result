#ifndef CALCULATOR_H
#define CALCULATOR_H
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
#endif
