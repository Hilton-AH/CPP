//ASSERT preprocessor directive helps with debugging using boolean values
//mulitple statements can be included in macro function using backslash \ at end of line
//ASSERT function can be controlled by a DEBUG macro
//#define DEBUG allows debugging to be turned on/off by changing value of DEBUG

#define DEBUG 1

//macro if-elif statement to define ASSERT function according to control value
//when debugging is set to on, ASSERT function is defined
#if (DEBUG==1)
#define ASSERT(expr) \
std::cout << #expr << "..." << num; \
if (expr!=true) { \
    std::cout << " Failed in file: " << __FILE__ ; \
    std::cout << std::endl << "at line" << __LINE__ << std::endl; \
    std::cout << "\nDate: " << __DATE__ << "\nTime: " << __TIME__; \
} \
else { \
    std::cout << " Passed" << std::endl; \
} 

//when debugging is set to off, ASSERT function is not defined
#elif (DEBUG==0)
#define ASSERT(result) \
std::cout << "Result is " << num << std::endl;

#endif

#include <iostream>

int main() {
    int num = 9; ASSERT(num<10);
    
    num++; ASSERT(num<10);

    return 0;
}