#include <iostream>
using namespace std ; 

class disply {
	private :
		int lastresult ;
		
	public :
	disply (){
		lastresult = 0 ;
	}
	
void showresult (int result){
	lastresult = result ;
	
	cout << "Result : " << lastresult << endl ;
	
}
	
	int getlastresult() {
		return lastresult ;
	}
	
	
	
};

class calculator {
	private :
		disply d;
    public :
void add (int a , int b){
		int result = a + b ;
		d.showresult(result) ;
			 }
	
	
void multiply(int a , int b){
	int result = a * b ;
	d.showresult(result) ;
}	
	
void showlastresult (){
  cout << "Last result : " << d.getlastresult() << endl ;
  
}

};

int main() {
	
	calculator c1 ;
	
	c1.add(5 , 5) ;
	
	c1.multiply(5 , 5) ;
	
	c1.showlastresult() ;

	return 0;
}
