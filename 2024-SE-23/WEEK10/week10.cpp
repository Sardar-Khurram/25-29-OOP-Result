//                     File handling

//Task 1: Create, Write, Read, and Append a File

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    ofstream outFile("notes.txt");
//
//    outFile << "Welcome to File Handling.\n";
//    outFile << "This is the second line.\n";
//    outFile << "This is the third line.\n";
//    outFile.close();
//
//    ifstream inFile("notes.txt");
//    string line;
//
//    cout << "File Contents:\n";
//    while (getline(inFile, line))
//    {
//        cout << line << endl;
//    }
//    inFile.close();
//
//    ofstream appendFile("notes.txt", ios::app);
//    appendFile << "Name: Ali\n";
//    appendFile << "Roll No: 23-CS-101\n";
//    appendFile.close();
//
//    cout << "\nData appended successfully.";
//
//    return 0;
//}


//Task 2: Count Number of Lines in a File

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    ifstream file("notes.txt");
//
//    string line;
//    int count = 0;
//
//    while (getline(file, line))
//    {
//        count++;
//    }
//
//    file.close();
//
//    cout << "Total number of lines = " << count << endl;
//
//    return 0;
//}


//Task 3: Copy Content from One File to Another

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    ifstream source("notes.txt");
//    ofstream destination("copy.txt");
//
//    string line;
//
//    while (getline(source, line))
//    {
//        destination << line << endl;
//    }
//
//    source.close();
//    destination.close();
//
//    cout << "File copied successfully." << endl;
//
//    return 0;
//}


//Task 4: Write Student Details and Then Read Them

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file("students.txt");

    file << "Ali 101\n";
    file << "Ahmed 102\n";
    file << "Sara 103\n";

    file.close();

    ifstream readFile("students.txt");

    string name;
    int rollNo;

    cout << "Student Details:\n";

    while (readFile >> name >> rollNo)
    {
        cout << "Name: " << name
             << "\tRoll No: " << rollNo << endl;
    }

    readFile.close();

    return 0;
}