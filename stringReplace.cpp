#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "I do like the seaside.";
    cout << "Original text: " << text << endl;

    text.insert(10, "to be beside "); //inserts "to be beside " at position 10
    cout << "Text after insert: " << text << endl;

    text.erase(2,3); //erases the 2 characters starting at position 2
    cout << "Text after erase: " << text << endl;

    text.replace(7,25,"strolling by the sea"); //replaces the 25 characters starting at position 7 with "strolling by the sea"
    cout << "Text after replace: " << text << endl;

    cout << "Copied text: " << text.substr(7,9) << endl; //copies the 9 characters starting at position 7
    cout << "Last character: " << text.at(text.length()-1) << endl; //prints the last character
    
    return 0;
}