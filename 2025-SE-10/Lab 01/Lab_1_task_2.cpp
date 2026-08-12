#include<iostream>
using namespace std;
struct Student{
	public:
	string firstname;
	string lastname;
	int rollno;
	float marks;
	void displayStudentinfo(){
	cout<<"Name: "<<firstname<<lastname<<endl;
	cout<<"Marks: "<<marks<<endl;
	} 
};
int main(){
	Student *ptr = new Student;
	cout<<"Enter First Name: ";
	cin>>ptr->firstname;
	cout<<"Enter Last Name: ";
	cin>>ptr->lastname;
	cout<<"Enter Roll No: ";
	cin>>ptr->rollno;
	cout<<"Enter Marks: ";
	cin>>ptr->marks;
	ptr->displayStudentinfo();
	delete ptr;
	return 0;
}
