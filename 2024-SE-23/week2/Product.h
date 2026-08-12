//Task 5 Encapsulation Product
#include <iostream>
using namespace std;
class Product
{	//data members
	private:
	string name;
	double price;
	int quantity;
	//member functions
	public:
	void setName(string n)
	{
		if(!n.empty())
		{
			name = n;
		}
		else
		{
			cout << "Invalid Name. Name cannot be empty." << endl;
		}
	}
	void setPrice(double p)
	{
		if(p > 0)
		{
			price = p;
		}
		else
		{
			cout << "Invalid price. Price cannot be less than or equal to 0." << endl;
		}
	}
	void setQuantity(int q)
	{
		if(q >= 0)
		{
			quantity = q;
		}
		else
		{
			cout << "Invalid Quantity. Quantity cannot be less than 0." << endl;
		}
	}
	string getName()
	{
		return name;
	}
	double getPrice()
	{
		return price;
	}
	int getQuantity()
	{
		return quantity;
	}
};

