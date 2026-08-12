#include <iostream>
using namespace std;

class Rectangle {
	public :

int length ;
int width ;

void setDimensions();
void area(); 
void Perimeter();

};

void Rectangle :: setDimensions (){
	cout<< "Enter Lenght : ";
	cin>> length ;
	cout << "Enter width : ";
	cin >> width ;
}
 void Rectangle :: area (){
 	cout << "Area : " << length * width << endl ;
 	
 }
void Rectangle :: Perimeter(){
	cout << "perimeter : " << 2 * (length + width) <<endl;
	
}


int main() {
	
	Rectangle r ;
	r.setDimensions();
	r.area();
	r.Perimeter();

	
	return 0;
}
