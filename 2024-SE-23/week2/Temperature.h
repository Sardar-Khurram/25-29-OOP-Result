//Task 4 Temperature
#include <iostream>
using namespace std;
class Temperature
{
	public:
	int Celcius;
	int Fahrenhiet;
	
	void CelciustoFehrenhiet()
	{
		Fahrenhiet = (Celcius * 9 /5 ) + 32;
	}
	void ConvertedValue()
	{
		cout << "Temperature in Fahrenhiet: " << Fahrenhiet << "F" << endl;
		cout << "Temperature in Celcius: " << Celcius << "C" << endl;
	}
};
