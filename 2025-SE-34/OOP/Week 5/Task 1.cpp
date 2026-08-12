#include <iostream>
using namespace std; 

  class person{
  	public :
  	string name ;  	
  	int age ;
  
  	void get_data(){
  	cout << "Enter name: ";
  	    cin >> name ;
  	cout << "Enter age: " ;
  	    cin>> age ;
  		
  		
	  }

  };
  
  class student : public person {
  	public :
  	int student_id ;
  	
  	void get_studentdata(){
    cout << "Enter Student i'd: ";
  	    cin >> student_id ;
  		
	  }
	  
    void disply_info (){ 
	 
	cout << "Name :" << name << endl;
	cout << "Age :" << age << endl;
	cout << "Student i'd: " <<student_id <<endl ;

	 }
  	
  };

int main() {
	  student p ;
		 
	 p.get_data();
	 p.get_studentdata();
	 cout << "\n\n---- STUDENT INFORMATION----" <<endl ;
	 p.disply_info();
	
	
	
	return 0;
}
