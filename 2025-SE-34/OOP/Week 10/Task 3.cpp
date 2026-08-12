#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream source("notes.txt");
    ofstream destination("copy.txt");

    string line;

while (getline(source, line)) {
        destination << line << endl;
    }

    cout << "Content copied successfully." << endl;

    source.close();
    destination.close();

    return 0;
}
