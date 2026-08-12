#ifndef STUDENT_H
#define STUDENT_H

using namespace std;
class Student {
	public:
		string name;
		int rollNumber;
		float marks;
		void getData()
		{
			cout << "===Student Class===" << endl;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter roll number: ";
			cin >> rollNumber;
			cout << "Enter marks: ";
			cin >> marks;
		}
		void displayData()
		{
			cout << "Name of student is: " << name << endl;
			cout << "Roll number of student is: " << rollNumber << endl;
			cout << "Marks of student is: " << marks << endl;
		}
};
#endif
