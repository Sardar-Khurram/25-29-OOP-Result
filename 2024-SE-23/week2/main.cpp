#include<iostream>
#include "Student.h"
#include "Rectangle.h"
#include "Voter.h"
#include "Temperature.h"
#include "Calculator.h"
#include "Product.h"
using namespace std;

//Task 1	
//int main()
//{
//	Student S1;
//	S1.getData();
//	S1.diplayData();
//}

//Task 2
//int main()
//{
//	Rectangle R1;
//	R1.setdimensions(10,10);
//	cout << "Area of Rectangle: " << R1.area() << endl;
//	cout << "Perimieter of Rectangle: " << R1.perimeter() << endl;
//	
//	Rectangle R2;
//	R2.setdimensions(30,20);
//	cout << "Area of Rectangle: " << R2.area() << endl;
//	cout << "Perimeter of Rectangle: " << R2.perimeter() << endl;
//	return 0;
//}

//Task 3
int main()
{
	Voter voter1;
	voter1.name = "Muqaddas Kiani";
	cout << "Voter Name: " << voter1.name << endl;
	voter1.age = 20;
	cout << "Voter Name: " << voter1.age << endl ;
	voter1.isEligible(20);
	
	Voter voter2;
	voter2.name = "Riffat Munir";
	cout << "\nVoter Name: " << voter2.name << endl;
	voter2.age = 21;
	cout << "Voter Age: " << voter2.age << endl;
	voter2.isEligible(21);
	return 0;
}

//Task 4
//int main()
//{
//	Temperature Temp1;
//	Temp1.Celcius = 70;
//	Temp1.CelciustoFehrenhiet();
//	cout << "Temperature in Celcius: " << Temp1.Celcius << "C" << endl;
//	Temp1.ConvertedValue();
//	return 0;
//}

//Task 5
//int main()
//{
//	int a,b;
//	char op;
//	cout << "Enter 1st Number: ";
//	cin >> a;
//	cout << "Enter 2nd Number: ";
//	cin >> b;
//	cout << "Enter operater for which you want to perform operation: ";
//	cin >> op;
//	Calculator Cal1(a,b);
//	switch(op)
//	{	
//	case '+':
//		Cal1.add();
//		break;
//	case '-':
//		Cal1.substract();
//		break;
//	case '*':
//		Cal1.multiply();
//		break;
//	case '/':
//		Cal1.divide();
//		break;
//	default:
//		cout << "Error! Invalid Oparation." << endl;
//	}
//	return 0;
//}

//Task 5 Encapsulation
//int  main()
//{
//	//test code
//	Product p;
//	p.setName("");
//	p.setPrice(-50);
//	p.setQuantity(-2);
//	
//	p.setName("Laptop");
//	p.setPrice(50);
//	p.setQuantity(5);
//	
//	cout << "Product: " << p.getName() << endl ;
//	cout << "Price: $" << p.getPrice() << endl ;
//	cout << "Quantity: " << p.getQuantity() << endl;
//	return 0;
//}
