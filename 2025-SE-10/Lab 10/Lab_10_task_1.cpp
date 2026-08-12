//Create,Write,Read,and Append
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // Create and Write
    ofstream outFile("notes.txt");
    outFile << "Line 1: Hello, World!\n";
    outFile << "Line 2: C++ File Handling\n";
    outFile << "Line 3: Practice Example\n";
    outFile.close();
    // Read and Display
    cout << "--- File Contents ---\n";
    ifstream inFile("notes.txt");
    string line;
    while (getline(inFile, line))
    cout << line << "\n";
    inFile.close();
    // Append
    ofstream appendFile("notes.txt", ios::app);
    appendFile << "Name: M.Awais\n";
    appendFile << "Roll Number: 12345\n";
    appendFile.close();
    cout << "\n--- After Appending ---\n";
    inFile.open("notes.txt");
    while (getline(inFile, line))
    cout << line << "\n";
    inFile.close();
    return 0;
}
