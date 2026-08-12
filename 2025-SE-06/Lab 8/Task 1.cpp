#include <iostream>

using namespace std;
//Polymorphyism by using function override and using pointers to access that functions
class Shape{
	public:
		virtual double area()
		{
			cout << "Area of a shape.." << endl;
			return 0;
		}
};

class Rectangle : public Shape{
	private:
		double length , width;
	public:
		Rectangle(double l, double w)
		{
			length = l;
			width = w;
		}
		double area() override 
		{
			return length*width;
		}
};

class Circle : public Shape{
	private:
		double radius;
	public:
		Circle(double r)
		{
			radius = r;
		}
		double area() override 
		{
			return 3.14*radius*radius;
		}
};

int main()
{
	Shape *S1 = new Rectangle(5.1,3.2);
	Shape *S2 = new Circle(4.0);
	
	cout << "Area of Rectangle: " << S1->area() << endl;         //output 16.32
	cout << "Area of Circle: " << S2->area() << endl;            //output 50.24
	
	delete S1;
	delete S2;
	
	return 0;
}
