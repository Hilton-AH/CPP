//conditional preprocessor direcitves can have alternative choices using #elif and #else

/* EXAMPLE
#ifdef WEATHER
    std::cout << "Weather is: " << WEATHER << std::endl;
#else
    #define WEATHER "Sunny"
#endif
*/

//#if defined(NAME) is used to test multiple conditions
//macros can be defined in source code with # or CLI with -DNAME=VALUE
//some macros are predefined by the compiler with dunderscores followed by name __LINE__, __FILE__, __DATE__, __TIME__, __STDC__
//to access predefined macros used call the cpp preprocesor directly from CLI ex(cpp -dM test.txt)

#if defined _WIN32
    #define OS "Windows"
#elif defined __linux__
    #define OS "Linux"
#elif defined __APPLE__
    #define OS "Mac"
#else
    #define OS "Unknown"
#endif

#include <iostream>

int main() {
    std::cout << "OS: " << OS << std::endl;

    return 0;
}




