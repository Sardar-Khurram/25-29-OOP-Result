//Task 3 Voter
#include <iostream>
using namespace std;
class Voter
{
	//data members
	public:
	string name;
	int age;
	//member functions
	void isEligible(int a);	
};
void Voter::isEligible(int a)
{
	int age = a;
	if ( age > 18)
	{
		cout << name << " is " << age << " years old and is eligible to vote." <<endl;
	}
	else
	{
		cout << name << " is " << age << " years old and is not eligible to vote." <<endl;
	}
}

