#include <iostream>
using namespace std; 

  class product {
  	private :
  	  string name ;
  	  double price ;
  	  int quantity ;
  	  
  	public :
  	  	
  	 void setname(string n){
  	 	if (n == " "){
  	 		cout << "Please Enter name: ";
		   }
		   else  
		   name = n ;
	   }
  	
  	 void setprice (double p){
  	 	if (p < 0){
  	 		cout << "Enter price  Greater than zero: ";
		   }
		   else
		   price = p ;
		   
	   }
	   
	 void setquantity (int q){

	    if (q < 0){
	    	cout << "Quantity can not be negative  ";
		}
		else
		quantity = q ;
			 }
	   
  	 string getname (){return name ;}
  	 double getprice (){return price ;}
  	 int getquantity (){return quantity ;}
  	
  };

  int main() {
  	 product p ;
  	 
  	 p.setname("Niqash");
  	 p.setprice(34);
  	 p.setquantity(10);
  	
  	
  	cout << p.getname() <<endl;
  	cout << p.getprice() <<endl;
  	cout<< p.getquantity() <<endl;
  	
  	
  	
	return 0;
}
