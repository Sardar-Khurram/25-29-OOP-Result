//Copy Content from One File to Another
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream srcFile("notes.txt");
    if (!srcFile) {
    cout<< "Error: Could not open notes.txt\n";
    return 1;
    }
    ofstream destFile("copy.txt");
    if (!destFile) {
    cout<< "Error: Could not create copy.txt\n";
    return 1;
    }
    string line;
    while (getline(srcFile, line))
    destFile << line << "\n";
    srcFile.close();
    destFile.close();
    // Display copied content
    cout << "--- Copied File Contents ---\n";
    ifstream readCopy("copy.txt");
    while (getline(readCopy, line))
    cout << line << "\n";
    readCopy.close();
    return 0;
}
