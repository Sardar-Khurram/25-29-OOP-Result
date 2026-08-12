#include <iostream>
using namespace std ;

class person{
	public:
	string name;
	int age ;
	
	void display_person(){
		cout << "Enter Name: ";
		cin >> name;
		cout <<"Enter Age: " ;
		cin >> age ;
		
	}	
};

class employee : public person{
	public :
	 int employee_id;
	
	void display_employee (){
		cout << "Enter employee i'd: " ;
		cin >> employee_id ;
	}
};

class manager : public employee {
	public :
	string department;
	
	void display_manager(){
		cout <<"Enter Department : " ;
		cin >> department ; 
	}
	
	void show_all (){
	
	cout << "\n\nName : " << name <<endl ;
	cout << "Age : " << age << endl;
	cout << "Employee i'd : " <<employee_id  <<endl ;
	cout << "Department : " << department <<endl ;
	}

};

int main() {
	
	manager p;
	
	p.display_person() ;
	p.display_employee () ;
	p.display_manager() ;
	
	p.show_all() ;

	
	return 0;
}
