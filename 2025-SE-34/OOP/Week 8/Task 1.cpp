#include <iostream>
using namespace std ;

class shape{
	public :
		virtual double area(){
			return 0;
		}
};

class rectangle : public shape{
	private :
	double length ;
	double width ;
	
	public :
		rectangle (double l , double w){
			length = l ;
			width = w 	;		
		}
	
double area() {
	return length * width ;
}

};

class circle : public shape{
	public :
		int redius ;
	
	circle (int r){
		redius = r ;
	}

double area () {

return 3.14 * redius * redius ;
}	
};

int main() {
	
	rectangle r (5 , 5) ;
	circle c (5) ;
	
	shape *s ;
	
	s = &r ;	
	cout << "Rectangle Area : " <<s->area() << endl ;
	
	s = &c ;	
	cout << "Circle Area : " << s->area() << endl ;
	
	return 0;
}
