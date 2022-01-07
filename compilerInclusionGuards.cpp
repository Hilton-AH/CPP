//typically many header files are included in the program with a single .cpp implementation file
//to guard against multiple definitions of the same function we use inclusion guards

#include "compilerGuardAdd.h"
#include "compilerGuardTriple.h"

#include <iostream>

int main() {
    std::cout << "9+3= " << compilerGuardAdd(9, 3) << std::endl;
    std::cout << "3*3= " << compilerGuardTriple(9) << std::endl;

    return 0;
}