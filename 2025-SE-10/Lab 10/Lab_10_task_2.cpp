//Count Numbers of lines
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inFile("notes.txt");
    if (!inFile) {
    cout<< "Error: Could not open notes.txt\n";
    return 1;
    }
    int count = 0;
    string line;
    while (getline(inFile, line))
    count++;
    inFile.close();
    cout << "Total number of lines: " << count << "\n";
    return 0;
}
