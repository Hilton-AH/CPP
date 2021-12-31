#include <iostream>
#include <string>
using namespace std;

int main() {
    //L-value (left-hand side)(location)(container) and R-value (right-hand side)(read)(data)
    int num = 100;
    double sum = 0.0123456789;
    string text = "C++ Fun";

    //dynamic hexadecimal output of the pointer address
    cout <<"Integer variable starts at: " << &num << endl; // &num is the address of num
    cout << "Double variable starts at: " << &sum << endl; // &sum is the address of sum
    cout << "String variable starts at: " << &text << endl; // &text is the address of text

    return 0;
}