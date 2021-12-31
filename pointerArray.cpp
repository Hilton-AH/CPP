#include <iostream>

int main() {
    //character array must contain special character '\0' at the end
    char letters[8] = {'C', '+', '+', ' ', 'F', 'u', 'n', '\0'}; 
    //character pointer
    const char* text = "C++ Fun"; 

    std::cout << "Character array: " << "\n";
    std::cout << letters << std::endl << "\n";
    std::cout << "Character pointer: " << "\n";
    std::cout << text << std::endl << "\n";


    //declare and initialize pointer variables
    const char* term = "Element:";
    const char* lang = "C++";

    //character pointer array
    const char* arrPointer1[3] = {"Great", "Program", "Code"}; 

    //character pointer array with a pointer variable as an element
    const char* arrPointer2[3] = {lang, "is", "Fun"};
    std::cout << "Character pointer array with a pointer variable: " << "\n";
    for (int i=0; i<3; i++) {
        std::cout << arrPointer2[i] << " ";
    }
    
    //"master" character pointer array (array of arrays)
    const char* arrPointer3[3] = {arrPointer2[0], arrPointer2[1], arrPointer1[0]};
    const char* arrPointer4[4] = {arrPointer1[2], arrPointer2[1], arrPointer2[2]};

    //loop to output the character pointer with iteration number
    std::cout << "\n\n" << "Character pointer array with iteration number: " << "\n";
    for (int i=0; i<3; ++i) {
        std::cout << term << i << "    ";
        std::cout << arrPointer1[i] << "    ";
        std::cout << arrPointer2[i] << "    ";
        std::cout << arrPointer3[i] << "    ";
        std::cout << arrPointer4[i] << std::endl;
    }
    
    return 0; 
}