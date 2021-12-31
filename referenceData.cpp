#include <iostream>

int main() {
    int num;
    //reference provide access to the value of a variable
    //reference can be used to change the value of a variable with appropriate type
    //"&" is reference operator
    //reference is an alias for the item associated in its declaration
    //reference=type of the variable with "&" along with the variable name and "r"
    //reference will always refer to the item which it was initialized with
    int& rNum = num;

    rNum = 400;

    std::cout << "Value direct: " << num << std::endl;
    std::cout << "Value reference: " << rNum << std::endl;

    std::cout << "Address direct: " << &num << std::endl;
    std::cout << "Address reference: " << &rNum << std::endl;

    rNum *= 2;

    std::cout << "Value direct: " << num << std::endl;
    std::cout << "Value reference: " << rNum << std::endl;


    return 0;
}