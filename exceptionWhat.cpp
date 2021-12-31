#include <iostream>
#include <string>
using namespace std;

int main() {
    string lang = "C++";

    try {
        lang.erase(4,6);
    }
    catch (exception & error) { // error is a reference to the exception object
        cerr << "Exception: " << error.what() << endl; //cerr is for error messages
    }   //.what() returns a string containing the error message

    return 0;
}