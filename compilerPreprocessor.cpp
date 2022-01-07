//source code(test.cpp) -> preprocessor -> substitutions(test.ii) -> compiler -> assembly code(test.s) -> assembler -> object code(text.o) -> linker -> executable(test.exe)
//save-temps compiler option allows to view the intermediate files in  a text editor

#include <iostream>

int main() {
    std::cout << "This is a test program" << std::endl;
    return 0;
}