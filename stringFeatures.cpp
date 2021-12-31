#include <iostream>
#include <string>
using namespace std;

void computeFeatures(string); //declare function prototype

int main() {
    string text = "C++ is fun";
    computeFeatures(text); //call function
    
    text += " for everyone!"; //concatenate string to string (bigger)
    computeFeatures(text); //call function
    
    text = " C++ fun!"; //concatenate string to string (smaller)
    computeFeatures(text); //call function
    
    text.clear(); //clear string
    computeFeatures(text); //call function
    
    return 0;
}

void computeFeatures(string text) { //define declared function
    cout << endl << "String: " << text << endl;
    cout << "Size: " << text.size(); //size of string
    cout << " Capacity: " << text.capacity(); //capacity is the maximum size of the string
    cout << " Empty?: " << text.empty() << endl; //empty() returns true(1) if string is empty

}