#include <stdexcept> //preprocessor directive for specific type of exception
#include <fstream> //preprocessor directive for file manipulation
#include <typeinfo> //preprocessor directive for type identification and information
#include <string>
#include <iostream>
using namespace std;

int main() {
    string lang = "C++";
    int num = 1000000000;

    try {
        // lang.replace(100,1,"C");
        // lang.resize(3*num);
        ifstream inFile("noFile.txt");
        if (!inFile) {
            throw logic_error("File not found");
        }
    }
    catch (out_of_range & e) {
        cerr << "Range exception: " << e.what() << endl;
        cerr << "Type: " << typeid(e).name() << endl;
        cerr << "Program terminated." << endl;
        return -1;
    }
    catch (exception & e) {
        cerr << "Exception: " << e.what() << endl;
        cerr << "Type: " << typeid(e).name() << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}