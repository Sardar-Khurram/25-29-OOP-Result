#ifndef TEMPERATURE_H
#define TEMPERATURE_H
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
#endif
