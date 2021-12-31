#include <iostream>

void writeOutput(int&);
void computeTriple(int&);

int main() {
    //reference can be passed to functions as a parameter or argument
    //their data is passed "by reference" as opposed to "by value"
    //C++ "&" "*" go after the data type... C "*" "&" go before the data type
    int num =5;
    int& ref = num; //initialize reference variable with num

    writeOutput(ref); //pass reference to function and call function

    ref += 15; //change value of num
    writeOutput(ref);

    computeTriple(ref);
    writeOutput(ref);
    
    
    return 0;
}

void writeOutput(int& value) {
    std::cout << "Current value: " << value << std::endl;
}

void computeTriple(int& value) {
    value *= 3;
}