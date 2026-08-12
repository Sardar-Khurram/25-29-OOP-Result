#include <iostream>
using  namespace std ;

class vehicle {
	protected :
		string brand ;
		
	public :
	   vehicle(string b){
	   	brand = b ;
	   	cout << "Brand: " << brand << endl ; 
	   }	
};

class car : public vehicle {
	protected :
	    int seat ;
	
    public : 
    car (string b , int s) : vehicle(b){
    	seat = s ;
    cout << "Your Seat is : " << seat << endl ;
	}
};

class electronic_car : public car {
	private :
		int battery ;
		
	public :
		electronic_car(string b , int s , int bh) : car( b, s){
			battery = bh ;
		cout << "The Car bettery is:  " << battery <<endl ;
	}
	
};

int main() {
	
	electronic_car e1 ("Honda " , 34 , 36 );
	

	return 0;
}
