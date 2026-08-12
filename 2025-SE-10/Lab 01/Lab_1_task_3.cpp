#include<iostream>
using namespace std;
struct Student{
	public:
	string firstname;
	string lastname;
	int rollno;
	float marks;
	void displayStudentinfo(){
	cout<<"Name: "<<firstname<<" "<<lastname<<endl;
	cout<<"Marks: "<<marks<<endl;
	} 
};
int main(){
	int n;
	cout<<"Enter number of Students: ";
	cin>>n;
	//Array of structure
	Student students[n];
	//Input for multiple students
	for(int i=0; i<n; i++){
	cout<<"=================="<<endl;
	cout<<"\nStudent"<<i+1<<endl;
	cout<<"First Name: ";
	cin>>students[i].firstname;
	cout<<"Last Name: ";
	cin>>students[i].lastname;
	cout<<"Roll Number: ";
	cin>>students[i].rollno;
	cout<<"Marks: ";
	cin>>students[i].marks;
	//Display all students
	for(int i=0; i<n; i++){
	students[i].displayStudentinfo();
	}
	}
}
