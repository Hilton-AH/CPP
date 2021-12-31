#include <iostream>

//inline function declaration adding reference "a" and pointer "b"
inline void add(int& a, int* b) {
    std::cout << "Total: " << (a + *b) << std::endl;
}

int main() {
    //reference and pointers pass data by reference which is more efficient and encouraged
    //program requirements determine if pointer or reference is better to use
    //generally, C++ programmers prefer reference over pointer
    /* RULE FOR REFERENCE AND POINTER:
    *   -reference is more efficient than pointer
    *   -reference is easier to use
    *   -reference is more convenient to use
    *   -reference is more flexible than pointer
    *   -reference is more secure than pointer
    * Can be declared without initialization:   References(no) Pointers(yes)
    * Can be reassigned:                        References(no) Pointers(yes)
    * Can contain a 0(null) value:              References(no) Pointers(yes)
    * 
    * USE A REFERENCE UNLESS:
    * 1. If you don't want to initialize in the declaration, use a pointer
    * 2. If you want to reassign the value, use a pointer
    * 
    */

    int num = 100;
    int sum = 500;
    int& rNum = num; //initialize reference variable with num
    int* ptr =  &num; //initialize pointer variable with num
    
    void (*fn) (int& a, int* b) = add; 

    std::cout << "Reference: " << rNum << std::endl;
    std::cout << "Pointer: " << *ptr << std::endl;
    
    ptr = &sum; //reassign pointer variable to sum
    std::cout << "Pointer now: " << *ptr << std::endl;
    fn(rNum, ptr); //call function with reference and pointer

    return 0;
}