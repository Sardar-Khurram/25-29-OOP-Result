 #include <iostream>
 using namespace std ;
 
 class printer {
 	public:
 	 	void print_document() {
 		cout << "Printing Complete" <<endl;
	 }
};
 
 class scanner {
 	public :
         void scan_documenta() {
 		cout << "Scaning Complete" <<endl ;
	 }
 };
 
 class photocopier : public printer , public scanner {
 	public :
 		void photocopy(){
 			cout << "photocopying " <<endl ;
 			

		 }
 	

 };

int main() {
	photocopier p;
	p.print_document();
	p.scan_documenta();
	p.photocopy();
	
	
	
	return 0;
}
