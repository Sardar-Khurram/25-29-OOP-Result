#include <iostream>
#include <string>
using namespace std;
class Voter{
	public:
		
	    string name;
	    int age;
	    bool isEligible();
};
bool Voter::isEligible()
{
	if (age > 18)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	Voter voter1;
	cout << "Enter name of voter: " << endl;
	cin >> voter1.name;
	cout << "Enter age of voter: " << endl;
	cin >> voter1.age;
	if (voter1.isEligible()==1)
	{
		cout << voter1.name << " is eligible to vote." << endl;
	}
	else
	{
		cout << voter1.name << " is not eliglible to vote." << endl;
	}
	return 0;
}
