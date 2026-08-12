#include <iostream>
using namespace std ;

struct student {
	
	string name ;
	string last_name ;
	int roll_no;
	double marks;
	
	 void display (int i ){
	 	cout << "student: " << i + 1 <<endl ;
	 	cout << "Name: "<< name <<" " <<last_name <<endl;
	 	
	 	cout <<"Marks: " << marks <<endl;

	 }

};


int main() {
	int n ;
	cout << "Enter the student of number: ";
	cin>> n ;
	
	
    student *ptr = new student [n];
    for (int i = 0 ; i < n ; i++){
    	cout << "student" << i + 1 << endl ;
	

	cout << "Enter First Name : " ;
        cin >> ptr[i].name ;

        cout << "Enter Last Name : " ;
        cin >> ptr[i].last_name;

        cout << "Enter Roll No : " ;
        cin >> ptr[i].roll_no ;

        cout << "Enter Marks : " ;
        cin >> ptr[i].marks ;
    	}

  
    cout << "\n--- Student Data ---\n";
    for (int i = 0 ; i < n ; i ++){
    	ptr[i].display(i);
	}
        
    



	
	
	return 0;
}
