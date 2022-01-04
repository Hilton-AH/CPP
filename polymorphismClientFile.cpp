#include "polymorphismHeader.h" //include header file using #include directive and quotes

int main() {
    Calculator* ptrCalc = new Calculator(); //create object of class Calculator
    
    ptrCalc->launch(); //call launch() method
    
    while(ptrCalc->run()) { //while status is true
        ptrCalc->readInput(); //call readInput() method
        ptrCalc->writeOutput(); //call writeOutput() method
    }

    return 0;
}