//preprocessor directive #define specifies a macro to be substituted in the code by the preprocessor
//macro is a fragment of code that has been given a name
//macro can be used in the code to be substituted
//macro is upper case by convention
//-DNAME or DNUM ex(c++ -DNUM=10 -DBOOK="Bjarne Stroustrup") can be used to define a macro from CLI

//macros
#define BOOK "The C++ Programming Language"
#define NUM 200
#define RULE "****************************"

//libraries
#include <iostream>

int main() {
    std::cout << RULE << std::endl << BOOK << std::endl << RULE;
    std::cout << std::endl << "NUM is: " << NUM << std::endl;
    std::cout << "Double of NUM is: " << NUM * 2 << std::endl;
    
    return 0;
}