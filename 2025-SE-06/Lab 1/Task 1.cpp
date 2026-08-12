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
	Student student;
	student.First_Name = "Talha";
	student.Last_Name = "Ali";
	student.Marks = 80;
	student.Roll_No = 6;
	student.displayStudentInfo();
	return (0);
}
