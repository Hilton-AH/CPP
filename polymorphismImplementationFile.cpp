#include "polymorphismHeader.h" //include header file using #include directive and quotes
#include <iostream>

Calculator::Calculator() { //constructor to set initial status
    status = true;
}

void Calculator::launch() { //display initial instructions
    std::cout << "****************Welcome to the calculator*******************\n";
    std::cout << "Enter zero to quit." << std::endl;
}

void Calculator::readInput() { //get expression
        std::cout << "Please enter first number: ";
        std::cin >> num1;
        if (num1 == 0) {
            status = false;
        }
        else {
        std::cout << "Please enter second number: ";
        std::cin >> num2;
        std::cout << "Enter operator: ";
        std::cin >> oper;
    }
}

void Calculator::writeOutput() { //display output
    if(status) switch(oper) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            break;
        default:
            std::cout << "Invalid operator.\n";
            break;
    }
    // else {
    //     std::cout << "Goodbye!\n";
    // }
}

bool Calculator::run() { //accessor to get current status
    return status;
}
