#include<iostream>
using namespace std;
	class Student{
	public:
	string name;
	int rollno;
	float marks;
	public:
	void getdata(){
	cout<<"Enter your name: "<<endl;
	cin>>name;
	cout<<"Enter your rollno: "<<endl;
	cin>>rollno;
	cout<<"Enter your marks: "<<endl;
	cin>>marks;
	}
	void displaydata(){
	cout<<"Name: "<<name<<endl;
	cout<<"Rollno: "<<rollno<<endl;
	cout<<"Marks: "<<marks<<endl;
	}
	};
	int main(){
	Student s1;
	s1.getdata();
	s1.displaydata();
	return 0;
	}



