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
	int n;
	cout << "Enter the number of students : ";
	cin >> n;
	Student student[n];
	cout << "Enter the details of students" << endl;
	for (int i=0; i<n; i++)
	{
		cout << "\nEnter first name of student " << i+1 << " ";
		cin >> student[i].First_Name;
		cout << "Enter the last name of student " << i+1 << " ";
		cin >> student[i].Last_Name;
		cout << "Enter roll no of student " << i+1 << " ";
		cin >> student[i].Roll_No;
		cout << "Enter the marks of student " << i+1 << " ";
		cin >> student[i].Marks;
    }
    for (int i=0; i<n; i++)
    {   cout << "\n===Student " << i+1 << " information===" << endl;
        student[i].displayStudentInfo();
		cout << endl;
	}
	
	return (0);
}
