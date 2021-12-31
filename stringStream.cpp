#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    //cannot convert string to int without using stringstream
    string term = "100";
    int number = 100;

    int num; string text; stringstream stream;
    stream << term; //loads string into stream
    stream >> num; //extracts int from stream

    num/=4; //divide by 4
    cout << "Integer value: " << num << endl;

    stream.str(""); //clears stream
    stream.clear(); //clears the bit flags

    stream << number; //loads int into stream
    stream >> text; //extracts string from stream

    text += " Per cent"; //concatenates string to string
    cout << "String value: " << text << endl;

    return 0;
}