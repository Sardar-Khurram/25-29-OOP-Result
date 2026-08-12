#include <iostream>
using namespace std ;

class Distance{
private :
	int feet ;
	int inches ;

public :
	Distance(int f , int i){
		feet = f ;
		inches = i ;		
	}

bool operator == (Distance d){
	if (feet == d.feet && inches == d.inches ){
		return true ;
	}
	else {
		return false ;
	}
}
	
};

int main() {
	
	Distance d1 (5 , 10);
	Distance d2 (5 , 10) ;
	
	if (d1 == d2){
		cout << "Both Distance are equal " << endl ;
	}
	else {
		cout << "Both Distance are Not equal " << endl ;
	}

	return 0;
}
