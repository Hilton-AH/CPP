//conditional tests used by macro fuctions to determine if a test should be run 
//if BOOK is not defined -> define BOOK -> endif
#ifndef BOOK        
    #define BOOK "C++ Programming"    
#endif             

#include <iostream>

int main() {
    //conditional preprocessor directive that tests if BOOK is defined, then define it
    #ifdef BOOK
        std::cout << "Book: " << BOOK << std::endl;
    #endif

    //conditional preprocessor directive that is not defined
    #ifndef AUTHOR
        #define AUTHOR "Bjarne Stroustrup"
        std::cout << "Author: " << AUTHOR << std::endl;
    #endif

    //conditional preprocessor directive that tests if BOOK is defined, then undefines it
    #ifdef BOOK
        #undef BOOK
    #endif

    //conditional preprocessor directive to test if BOOK is defined, then define it
    #ifndef BOOK
        #define BOOK "C Programming"
        std::cout << "Book: " << BOOK << std::endl << "by Dennis Ritchie" << std::endl;
    #endif

    return 0;
}




