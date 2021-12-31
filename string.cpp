#include <iostream>  //preprocessor directive
#include <string>   //preprocessor directive for string variable
#include <sstream>  //preprocessor directive for stringstream variable(convert int to string)
using namespace std;    //allows use of std namespace without std::string  etc.

int main() {
    string text = "9"; //double qoutes for string
    string term("9 "); //can be assigned using parenthesis
    string info = "Toys"; //can be assigned using equal sign
    
    string color; //optional to add more statements after initialization
    char hue[4] = {'R','e','d','\0'}; //char array must end with special character \0
    color = hue; //assigns char array to string

    info = " Balloons"; //assigns string to string
    text += (term + color + info); //concatenates string to string

    cout << endl << text << endl; //prints string

    return 0;
}