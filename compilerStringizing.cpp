//preprocessor # operator is known as the "stringizing operator"
//# converts a series of characters passed as a macro parameter into a string literal
//white space is ignored
//this eleminates the need for string double quotes
//macro definition can combine two terms into single term using the merging operator ##

//macro creates a string of characters from a series of characters passed as a macro parameter
#define LINEOUT(str) std::cout << #str << std::endl;

//macro combines two terms into single term using the merging operator ##
#define GLUEOUT(a,b) std::cout << a##b << std::endl;

#include <iostream>
#include <string>

int main() {
    std::string longerline = "This is a longer line";
    longerline += " that is longer than the other line";

    LINEOUT(In a bowl of cereal);
    //removes white space inthe beginning/end of a string and replaces it with a single space in middle
    LINEOUT(In a bowl of        milk);
    //combine two terms into single term using the merging operator ##
    GLUEOUT(longer,line);
    LINEOUT(In a bowl of cereal that is longer than the other line);   

    return 0;
}
