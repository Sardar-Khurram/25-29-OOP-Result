#include <iostream>
using namespace std ;

class device {
	protected :
	string device_name ;
	int device_id ; 
	int *data ;
	
	public :
	device (string name , int id ) {
	device_name = name ;
	device_id = id ;
	
	data = new int ;
	* data = 100 ;
	
	cout << "Device Constructor! " << endl ;
		
		
	}
	
    ~device (){
	delete data  ;
	  cout << "Data Delete (Memory freed) !" << endl ;
	}

};

class sensor : public device {
	private :
	string sensor_type ;
	float *sensor_value ;
	
	public :
		sensor (string name , int id , string type , float value) : device (name , id) {
		
		sensor_type = type  ;
	    sensor_value = new float ;
	    *sensor_value = value ;
	    
	    cout << "sensor constructor !" <<endl ;
		}
	    
	~sensor (){
		delete sensor_value ;
		
		cout << "sensor Memory free !" << endl ;
	} 
	    
	    void display () {
	    	cout << "Device Name: " <<device_name << endl ;
	    	cout << "Device ID: " <<device_id << endl ;
	    	cout << "Sensor Type: " <<sensor_type << endl ;
	    	cout << "Sensor  Value: " <<*sensor_value << endl ;	    	
		}

};

int main (){
	
	sensor *s1 = new sensor ("Iphone" , 34 , "Anything " , 36 ) ;
	s1->display ();
	
	
	delete s1 ;
}



