#include <iostream>
using namespace std ;

class rectangle {
	private :
		float length ;
		float width ;
	public :
	rectangle() {
		
		length = 1.0 ;
		width = 1.0 ;
	}
	
	rectangle (float l , float w ){
			length = l ;
			width = w ;
			
		}
		
	rectangle (float side){
			length = side ;
			width = side ;
			
		}
		
	float area (){
		
		return length * width ;
	}
	
   void display (){
       cout << "Lenght: " <<length <<endl ;
       cout << "width: " << width << endl ;
       cout << "Area : " << area() <<endl ;   	
   }	
};

int main() {
	
	rectangle r1 ;
	
	rectangle r2 (3 , 4) ;
	
	rectangle r3 (3.4) ;
	
	cout << "Default: "<<endl;
	    r1.display() ;
	cout << "Length and width :  " <<endl;
	    r2.display();
	cout << "Square : " <<endl;
	     r3.display();
	
	
	
	return 0;
}
