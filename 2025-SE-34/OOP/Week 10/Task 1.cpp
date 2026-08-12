#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("notes.txt");

    file << "This is first line." << endl;
    file << "This is second line." << endl;
    file << "This is third line." << endl;

    file.close();

    ifstream readFile("notes.txt");
    string line;

    cout << "File Contents:" << endl;

    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close();

    ofstream appendFile("notes.txt", ios::app);

    appendFile << "Name: Niqash Ali" << endl;
    appendFile << "Roll No: 123" << endl;

    appendFile.close();

    return 0;
}
