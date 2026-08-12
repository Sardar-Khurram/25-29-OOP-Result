#include <iostream>
using namespace std ;

class product {
	protected :
    	string name ;
	    float price ;
	    
	public :
		product (string n , float p){
			name = n ;
			price = p ;
		}
	void display_info(){
		cout << "Name: " << name  << endl ;
		cout << "Price: " << price << endl ; 
	}
	
};

class electronic : public product {
	private :
	     int warrantyYears ;
	     
	public :
	    electronic(string n , float p , int w ) : product (n , p) {	    
		 	warrantyYears = w ;
		}  
	     
	void display_electronic (){
		display_info();
		cout << "Warranty Years: " <<warrantyYears << endl ;
		
	}
};

int main() { 

   electronic e1 ("Niqash" , 34 , 36) ;
    e1.display_electronic() ;

	return 0;
}
