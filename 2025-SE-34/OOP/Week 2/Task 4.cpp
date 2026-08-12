#include <iostream>
using namespace std;

   class Temperature {
public:
	
    float celsius ;
      float fahrenheit ;

     void toFahrenheit () ;  
    void display () ;
    
     };

     void Temperature::toFahrenheit() {
     	
    fahrenheit = (celsius * 9/5) + 32;
}

void Temperature::display() {
	
    cout<< "temperature in fahrenheit : " <<fahrenheit << endl;
    
}

int main() {
	
    Temperature t;

    cout << "enter temperature in celsius : ";
    cin >>t.celsius;

    t.toFahrenheit(); 
    t.display();       

    return 0;
}
