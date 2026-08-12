#include <iostream>

using namespace std;
class Temperature{
	public:
		float celsius;
		float fahrenheit;
		void conversionTemp()
		{
			fahrenheit = (celsius * 9 / 5) + 32;
		}
		void displayTemp()
		{
			cout << celsius << " celsius temperature is equal to " << fahrenheit << " fahernheit." << endl;
		}
};

int main()
{
	Temperature Temp;
	cout << "Enter temperature in celsius: ";
	cin >> Temp.celsius;
	Temp.conversionTemp();
	Temp.displayTemp();
	return (0);
}
