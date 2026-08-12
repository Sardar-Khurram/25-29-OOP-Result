#include <iostream>
using namespace std ;

class voter{
	public :
	
	string name;
	int age ;
	
	bool isEligible() ;
	
	
};

bool voter :: isEligible(){
	if ( age > 18 )
		return true ;
		else 
		return false ;
	
	
}

int main() {
	 
	 voter v ;
	 cout << "Enter your Name: ";
	 cin >> v.name ;
	 cout << "Enter your age: ";
	 cin >> v.age ;
	 
	 if(v.isEligible()){
	 	cout << v.name << " is eligible for vote" << endl;
}
	else{
	
	    cout << v.name << " is not eligible for vote "<< endl ;
	 
	 	
	 }
	
	
	
	return 0;
}
