#include<iostream>
using namespace std;
class Rectangle{
	public:
	int length;
	int width;
	void setDimensions();
//	(int l ,int w);
	int area();
	int perimeter();
};
void Rectangle::setDimensions(){
//(int l,int w){
//	length = l;
//	width= w;
	cout<<"Enter the length: "<<endl;
	cin>>length;
	cout<<"Enter the width: "<<endl;
	cin>>width;
}
int Rectangle::area(){
	cout<<"Area of rectangle is: "<<length*width<<endl;
	return length*width;
}
int Rectangle::perimeter(){
	cout<<"Perimeter of the rectangle is: "<<2*(length*width)<<endl;
	return 2*(length*width);
}
int main(){
	Rectangle r1;
	r1.setDimensions();
	r1.area();
	r1.perimeter();
	return 0;
}
