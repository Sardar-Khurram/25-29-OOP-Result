//Write Student Details and Read them
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // Write student details
    ofstream outFile("students.txt");
    if (!outFile) {
    cout<< "Error: Could not create students.txt\n";
    return 1;
    }
    outFile << "Name: Ali    | Roll No: 101\n";
    outFile << "Name: Sara   | Roll No: 102\n";
    outFile << "Name: Ahmed  | Roll No: 103\n";
    outFile.close();
    // Read and display
    cout << "--- Student Details ---\n";
    ifstream inFile("students.txt");
    string line;
    while (getline(inFile, line))
    cout << line << "\n";
    inFile.close();
    return 0;
}
