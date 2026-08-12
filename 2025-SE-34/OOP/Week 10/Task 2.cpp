#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream file("notes.txt");

    string line;
    int count = 0;

while (getline(file, line)) {
        count++;
    }

    cout << "Total Lines = " << count << endl;

    file.close();

    return 0;
}
