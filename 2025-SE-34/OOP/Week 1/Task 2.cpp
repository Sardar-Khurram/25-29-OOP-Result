#include <iostream>
using namespace std ;

struct student {
	
	string name ;
	string last_name ;
	int roll_no;
	double marks;
	
	 void display (int i ){
	 	cout << "student" << i + 1 << endl ;
	 	cout << "Name: "<< name <<" " <<last_name <<endl;
	 	
	 	cout <<"Marks: " << marks <<endl;

	 }

};


int main() {
	
	int n;
	cout << "Enter the Number of student : ";
	cin >> n ;
	
	
	student s [n];
	
	for (int i = 0 ; i < n ; i++ ){
		cout << "\nstudent " << i+ 1 <<endl ;

	cout << "Enter First Name : " ;
        cin >> s[i].name ;

        cout << "Enter Last Name : " ;
        cin >> s[i].last_name;

        cout << "Enter Roll No : " ;
        cin >> s[i].roll_no ;

        cout << "Enter Marks : " ;
        cin >> s[i].marks ;
    	}

  
    cout << "\n--- Student Data ---\n";
    for (int i = 0; i < n; i++) {
        s[i].display(i);
    }



	
	
	return 0;
}
