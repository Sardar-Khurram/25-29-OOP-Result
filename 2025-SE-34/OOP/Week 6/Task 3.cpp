#include <iostream>
using namespace std ;

class file {
	public :
		file() {
			cout << "File oppened !" <<endl  ;
		}
	
	   ~file(){
	   	    cout << "File Closed !"  <<endl ;
	   }
	
};
 class text_file : public file {
 	public :
 		text_file(){
 			cout << "Text File oppend !" <<endl  ;
		 }
 	
 	    ~text_file(){
 	    	cout << "Text File closed !" <<endl;
		 }
 	
 	
 };

int main() {
	
	text_file t ;
	
	
	return 0;
}
