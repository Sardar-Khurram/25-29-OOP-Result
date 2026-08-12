//File Handling System(Destructor Order)
#include <iostream>
using namespace std;
class File {
protected:
    string fileName;
public:
    File(string name) {
    fileName = name;
    cout << "File opened: " << fileName << endl;
    }
    ~File() {
    cout << "File closed: " << fileName << endl;
    }
};
class TextFile : public File {
private:
    string fileType;
public:
    TextFile(string name, string type) : File(name) {
    fileType = type;
    cout << "TextFile created, Type: " << fileType << endl;
    }
    ~TextFile() {
    cout << "TextFile destroyed, Type: " << fileType << endl;
    }
};
int main() {
    cout << "--- Creating TextFile object ---" << endl;
    TextFile tf("document.txt", "Text");
    cout << "--- End of main, destructors will be called ---" << endl;
    return 0;
}
