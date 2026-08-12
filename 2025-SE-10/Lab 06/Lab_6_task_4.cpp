//Device and Sensor System(Dynamic Memory)
#include <iostream>
using namespace std;
class Device {
protected:
    string deviceName;
    int deviceID;
    int* data;
public:
    Device(string name, int id, int dataValue) {
    deviceName = name;
    deviceID = id;
    data = new int(dataValue);
    cout << "Device constructor: " << deviceName
    << " (ID: " << deviceID << ")"
    << " | Data: " << *data << endl;
    }
    ~Device() {
    delete data;
    cout << "Device destructor: memory freed for "
    << deviceName << endl;
    }
};
class Sensor : public Device {
private:
    string sensorType;
    float* sensorValue;
public:
    Sensor(string name, int id, int dataVal,
    string type, float sVal)
    : Device(name, id, dataVal) {
    sensorType = type;
    sensorValue = new float(sVal);
    cout << "Sensor constructor: Type = " << sensorType
    << " | Value = " << *sensorValue << endl;
    }
    ~Sensor() {
    delete sensorValue;
    cout << "Sensor destructor: memory freed for "
    << sensorType << endl;
    }
    void display() {
    cout << "\n--- Sensor Info ---" << endl;
    cout << "Device Name: " << deviceName << endl;
    cout << "Device ID: " << deviceID << endl;
    cout << "Sensor Type: " << sensorType << endl;
    cout << "Sensor Value: " << *sensorValue << endl;
    }
};
int main() {
    // Stack object
    cout << "=== Stack Object ===" << endl;
    {
    Sensor s1("TempSensor", 101, 42, "Temperature", 36.5f);
    s1.display();
    } // destructors called automatically here
    // Heap object
    cout << "=== Heap Object ===" << endl;
    Sensor* s2 = new Sensor("PressureSensor", 202, 99,
    "Pressure", 101.3);
    s2->display();
    delete s2; // destructors called manually
    return 0;
}
