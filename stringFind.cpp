#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "I can resist anything but temptation.";
    int num;

    num = text.find("resist", 0); //finds the first occurrence of "resist" at position 0
    cout << "Position of first occurrence of \"resist\": " << num << endl;

    num = text.find("nonsuch", 0); //finds the first occurrence of "nonsuch" at position 0
    cout << "Position of first occurrence of \"nonsuch\": " << num << endl;

    num = text.find_first_of("If");
    cout << "Position of first occurrence of \"If\": " << num << endl;

    num = text.find_first_not_of("If");
    cout << "Position of first occurrence of non-\"If\": " << num << endl;

    num = text.find_last_of("t");
    cout << "Position of last occurrence of \"t\": " << num << endl;

    num = text.find_last_not_of("t");
    cout << "Position of last occurrence of non-\"t\": " << num << endl;

    return 0;
}