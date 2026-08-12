#include <iostream>
using namespace std ;

struct student {
	
	string name ;
	string last_name ;
	int roll_no;
	double marks;
	
	 void display (){
	 	cout << name <<" " <<last_name <<endl;
	 	
	 	cout << marks ;
	 	
	 	
	 }

};


int main() {
	
	student s1;
	s1.name = "Niqash" ;
	s1.last_name = "Ali" ;
	s1.roll_no = 34 ;
	s1.marks = 80.0 ;
	s1.display();
	
	
	
	return 0;
}
