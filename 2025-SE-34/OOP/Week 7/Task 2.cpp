#include <iostream>
using namespace std ;

class calculator {
	public :
	int add (int a , int b) {
		return a + b ;		
	}
	
	int multiply (int a , int b){  
	return a * b ;
	}

};

class student {
private :
	calculator *calu ;
	
public :
   student (calculator *c){
   	calu = c ;
   }
	
  void performaddition (int a , int b )	{
  	cout << "Addition Result " << calu->add(a , b) << endl ;
  }
	
   void performultiply (int a , int b) { 
   cout << "Multiply Result : " << calu->multiply(a , b) << endl ;
    }	
};

int main() {
	
	calculator calu1 ;
	student s1(&calu1);
	student s2(&calu1) ;
	
	s1.performaddition(5 , 5) ;
	s2.performultiply(5 , 5) ;
	
	return 0;
}
