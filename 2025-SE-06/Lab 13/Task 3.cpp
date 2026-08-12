//class template that stores values of same type
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Pair{
	private:
		T first , second;
	public:
		Pair (T a , T b)          //constructor
		{
			first = a;
			second = b;
		}
		
		T getFirst()
		{ return first; }
		
		T getSecond()
		{ return second; }
		
		void display() //display method
		{
			cout << "First: " << first << "\tSecond: " << second << endl;
		}
};

int main()
{
	Pair <int> p1(10 , 20);
	Pair <double> p2(4.8 , 9.6);
	Pair <string> p3("Hello" , "World.");
	
	p1.display();
	p2.display();
	p3.display();
	
	return 0;
}
