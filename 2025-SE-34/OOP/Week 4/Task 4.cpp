#include <iostream>
using namespace std ;

class locker {
	public :
	locker (){		
		cout << "Locker allocated to customer " << endl ;
	}
	
	~locker (){
		cout << "Locker returend by customer " <<endl ;
	}

	
};

int main() {
	
  {
  	locker l1 ;
	  }	
	
	locker *l2 = new locker() ;
	delete l2 ;
	return 0;
}
