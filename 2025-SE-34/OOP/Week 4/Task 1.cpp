#include <iostream>
using namespace std ;

class employee {
	private :
		int id ;
		string name ;
		float salery ;
	public :	
	employee (){
		id = 0 ;
		name = "Not Assigned" ;
		salery = 0.0 ;	
	}
	
	void display () {
		cout << "Your ID is: " <<id <<endl ;
		cout << "Your Name is: " <<name <<endl ;
		cout << "Your Salery is: " <<salery <<endl ;

	}	
};

int main() {
	
	employee e1 ;
	
	e1.display();
	
	return 0;
}
