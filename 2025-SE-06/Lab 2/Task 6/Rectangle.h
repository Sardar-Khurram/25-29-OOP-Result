#ifndef RECTANGLE_H
#define RECTANGLE_H

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
	cout << "\n===Rectangle Class===" << endl;
	cout << "Enter length of rectangle: ";
	cin >> length;
	cout << "Enter width of rectangle: ";
	cin >> width;
}
void Rectangle::area()
{
	cout << "Area of rectangle is: " << length*width << endl;
}
void Rectangle::perimeter()
{
	cout << "Perimeter of rectangle is: " << 2* (length+width)<< endl;
}

#endif
