//preprocessor instructions
#include <iostream>

//function prototypes
void writeOutput(int*);
void computeTriple(int*);

int main() {
    int num = 5;

    //initialize pointer with address of num
    int* ptr = &num;

    //pass pointer to writeOutput function
    writeOutput(ptr);

    //use pointer to increase the variable value(num)
    *ptr += 15; 
    writeOutput(ptr);

    computeTriple(ptr);
    writeOutput(ptr);

    return 0;
}

/*FUNCTIONS THAT OPERATE DIRECTLY ON VARIABLES WITHIN THE CALLING FUNCTION DO NOT NEED A RETURN STATEMENT*/

//function outputs the current value of the pointer
void writeOutput(int* value) {
    std::cout << "Current value: " << *value << std::endl; 
}

//function multiplies the value of the pointer by 3
void computeTriple(int* value) {
    *value *= 3;
}

