//#define creates macro functions that can be substituted in source code befor compilation
//ex: #define HALF(n)(n/2) no spaces between name and parenthesis
//macros do not perfom type checking, thus inline functions are preferred
//macros are faster by avoiding overhead of function call

#define SQUARE(n) ((n)*(n))
#define CUBE(n) ((n)*(n)*(n))

#include <iostream>

inline int square(int n) {return n*n;}
inline int cube(int n) {return n*n*n;}

int main() {
    int num = 5;

    std::cout << "Macro SQUARE: " << SQUARE(num) << std::endl;
    std::cout << "Inline SQUARE: " << square(num) << std::endl;
    std::cout << "Macro CUBE: " << CUBE(num) << std::endl;
    std::cout << "Inline CUBE: " << cube(num) << std::endl;

    return 0;
}