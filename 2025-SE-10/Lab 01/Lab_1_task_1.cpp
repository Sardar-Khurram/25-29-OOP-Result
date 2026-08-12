#include<iostream>
using namespace std;
struct Student{
	public:
	string firstname;
	string lastname;
	int rollno;
	float marks;
	void displayinfo(){
	cout<<"Name: "<<firstname<<lastname<<endl;
	cout<<"Rollno: "<<rollno<<endl;
	cout<<"Marks: "<<marks<<endl;
	} 
};
int main(){
	Student s1;
	s1.firstname ="Misbah";
	s1.lastname =" Khurshid";
	s1.marks =90;
	s1.rollno =10;
	s1.displayinfo();
	return 0;
}
