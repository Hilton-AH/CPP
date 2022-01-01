#include <iostream>

class Parent {
    public:
        //default constructor
        Parent() {
            std::cout << "Parent constructor called" << std::endl;
        }
        
        //overloaded constructor
        Parent(int a) {
            std::cout << "Overloaded Parent constructor called" << std::endl;
        }
};

class Daughter: public Parent {
    public:
        //default constructor
        Daughter() {
            std::cout << "Daughter constructor called" << std::endl;
        }
};

class Son: public Parent {
    public:
        Son(int a): Parent(a) {
            std::cout << "Derived Son class overloaded constructor called" << std::endl;
        }
};

int main() {
    Daughter Emma;
    Son Andrew(5);
    
    return 0;
}