//Task 2 Rectangle
#include<iostream>
using namespace std;
class Rectangle
{
	public:
	//data members
	int length;
	int width;
	//member functions
	void setdimensions(int l, int w);
	area();
	perimeter();
};
void Rectangle::setdimensions(int l, int w)
{
	length = l;
	width =  w;
}
int Rectangle::area()
{
	return length * width;
}
int Rectangle::perimeter()
{
	return 2 * ( length + width );
}

