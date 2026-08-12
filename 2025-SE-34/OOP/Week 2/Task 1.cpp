#include <iostream>
using namespace std;

class student {
	public :
	string name ;
	int roll_number ;
	float marks;

  void getdata(){
   cout<<" Enter your Name : ";
   cin >> name ;
   cout<<" Enter your Roll Number : ";
   cin >> roll_number ;
   cout<<" Enter your Marks : ";
   cin >> marks;
 
}	
   
void displayData(){
	
	cout << "The Name of student is : " <<name <<endl ;
	cout << "The Roll No of student is : " << roll_number <<endl ;
	cout << "The Marks of student is : " << marks <<endl ;
}

};


int main() {
	
  student s;
  s.getdata();
  s.displayData();
	
	return 0;
}
