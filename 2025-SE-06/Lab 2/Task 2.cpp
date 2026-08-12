#include <iostream>
using namespace std;
class Rectangle{
	public:
		int length;
		int width;
		void setDimensions();
		void area();
		void perimeter();
};
void Rectangle::setDimensions()
{
	cout << "Enter length of rectangle: " << endl;
	cin >> length;
	cout << "Enter width of rectangle: " << endl;
	cin >> width;
}
void Rectangle::area()
{
	cout << "Area of rectangle is: " << length*width << endl;
}
void Rectangle::perimeter()
{
	cout << "Perimeter of rectangle is: " << 2*length+width << endl;
}

int main()
{
	Rectangle R1;
	R1.setDimensions();
	R1.area();
	R1.perimeter();
	return (0);
}
