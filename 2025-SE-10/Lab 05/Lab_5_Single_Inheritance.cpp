#include<iostream>
using namespace std;
class Person{
	protected:
	string name;
    int age;
	public:
	void input_person_info(){
	cout<<"Enter name: ";
    getline(cin, name);
	cout<<"Enter age: ";
	cin>>age;
	cin.ignore();            //clear buffer for next line
	}	
	void display_person_info(){
	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
	}
};
class Student : public Person{
	private:
	int student_id;
    public:
	void input_student_info(){
	input_person_info();
	cout<<"Enter Student ID: ";
	cin>>student_id;
	cin.ignore();
}
void display_student_info(){
	cout<<"\n--- Complete Student Details---"<<endl;
	display_person_info();   //call base class display
	cout<<"Student ID: " <<student_id<<endl;
}
};
int main(){
	Student s;
	cout<<"---Enter Student Details---"<<endl;
	s.input_student_info();    //accepts input for all fields
    s.display_student_info();  //displays using both functions
    return 0;
}
