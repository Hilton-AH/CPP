#include <iostream>
#include <string>
using namespace std;

int main() {
    string lang = "C++";
    string term = " Programming";
    string text = "C++ Programming";

    cout << "Concatenated string: " << lang + term << endl;
    cout << "Original string: " << lang << endl;

    cout << "Appended string: " << lang.append(term) << endl;
    cout << "Original string: " << lang << endl << endl;

    cout << "Difference between original and appended string: " << (lang==term) << endl;
    cout << "Match between original and appended string: " << (lang==text) << endl << endl;

    cout << "Match: " << lang.compare(text) << endl;
    cout << "Difference: " << lang.compare(term) << endl;
    cout << "Lower ASCII: " << lang.compare("ZZZZ") << endl;

    return 0;
}