//cFile.h - (header file) containing only class declarations
//cFile.cpp - (implementation file) containing class definitions to implement method declared in header file; referenced by #include directive
//cFile.cpp - (client file) containing main() method to call methods declared in header file; also referenced by #include directive
//header file and implementation file are compiled into binary object file cFile.o
//Finally, the linker combines all the object files into a single executable file cFile.exe
//Isolating class structures into separate files allows for easier maintenance and reuse

class Calculator {
    public:
        Calculator(); //constructor to set initial status
        void launch(); //display initial instructions
        void readInput(); //get expression
        void writeOutput(); //display output
        bool run(); //accessor to get current status

    private:
        double num1, num2; //store input numbers
        char oper; //store input operator
        bool status; //store current status
};

