#include <iostream>
#include <string>
using namespace std;

int main() {
    string front;
    string back;
    string text = "Always laugh when you can. It\'s cheap medicine.";

    front.assign(text); //assigns the whole string to front
    cout<< endl << "Front:" << front << endl;

    front.assign(text, 0, 27); //assigns the first 27 characters to front
    cout<< "Front:" << front << endl;

    back.assign(text, 27, text.size()); //assigns the last 27 characters to back
    cout<< "Back:" << back << endl;

    back.swap(front); //swaps the values of front and back
    cout << endl << "Front:" << front << endl;
    cout << "Back:" << back << endl;
    
    return 0;
}