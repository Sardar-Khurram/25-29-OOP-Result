#include <iostream>
#include <string>
using namespace std;
struct Student 
{
	string First_Name;
	string Last_Name;
	int Roll_No;
	int Marks;
	void displayStudentInfo()
	{
		cout << "Full name of the student is : " << First_Name << " " << Last_Name << endl;
		cout << "Marks of the student is : " << Marks << endl;
	}
};
int main()
{
	Student *student = &S1;
	cout << "Enter the details of the student :" << endl;
	cout << "First Name: ";
	cin >> student->First_Name;
	cout << "Last Name: ";
	cin >> student->Last_Name;
	cout << "Roll No: ";
	cin >> student->Roll_No;
	cout << "Marks: ";
	cin >> student->Marks;
	student->displayStudentInfo();
    
	return (0);
}
