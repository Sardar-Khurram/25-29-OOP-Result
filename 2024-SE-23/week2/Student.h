//Task 1 Student 
#include<iostream>
using namespace std;
class Student
{
	public:
	string Name;
	int Roll_Number;
	float Marks;
	
	void getData()
	{
		cout << "Enter Student Name: ";
		cin >> Name;
		cout << "Enter Roll Number: ";
		cin >> Roll_Number;
		cout << "Enter Marks: ";
		cin >> Marks;
	}
	void diplayData()
	{
		cout << "Student Name: " << Name <<endl;
		cout << "Student Roll Number: " << Roll_Number <<endl;
		cout << "Student Marks: " << Marks <<endl;
	}
};
