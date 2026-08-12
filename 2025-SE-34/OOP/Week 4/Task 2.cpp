#include <iostream>
using namespace std ;
class bank_account  {
	private :
		string account_number ;
		string account_holder ;
		double balance ;
	
	public :
		bank_account (string nbr , string holder , double bal ){
			account_number = nbr ;
			account_holder = holder ;
			balance = bal ;
			
		}
	
void showAccountDetail(){
	
	cout << "Your Account Number is: " << account_number << endl ;
	cout << "Account Holder is: " << account_holder << endl ;
	cout << "Your Account Balance is: " << balance << endl ;
}
	 
};

int main() {
	
	bank_account b1 ("PK03020004560" , "Niqash" , 34000 ) ;
	b1.showAccountDetail();
	
	
	return 0;
}
