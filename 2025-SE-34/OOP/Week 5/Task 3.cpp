#include <iostream>
using namespace std;

class employee{
	public:
	string name ;
	float salery ;
	
void get_employee (){
	cout << "Enter your Name: " ;
	cin >> name ;
	cout << "Enter your Salery: ";
	cin >> salery ;
}

void display_employee (){
	cout << "Name: " << name <<endl ;
	cout << "Salery: " << salery <<endl ;
}

};

class developer : public employee {
	public  :
    string programming_language ;
	
void get_developer(){
	 get_employee();
    cout<< "Enter Your Programming Language: " ;
    cin >> programming_language ;
}

void display_developer(){
	display_employee();
	cout<< "programming Language: " << programming_language <<endl ;
}
		
};

class designer : public employee {
	public :
	string design_tool ;
	 
void get_designer(){
	get_employee();
	cout << "Enter You Design Tool: "  ;
		cin >> design_tool ;
}

void display_designer(){
	display_employee();
	cout << "Design Tools: " <<design_tool <<endl ;
	
}

};

int main() {
	
	developer d;
	cout  << "----Developer Information----" <<endl ;
	cout << endl ;
	d.get_developer();
	d.display_developer() ;
	
	cout << endl ;
	cout << "----Designer Information----" <<endl  ;
	cout << endl ;
	designer dd ;
	dd.get_designer();
	dd.display_designer();
	
	

	
	return 0;
}
