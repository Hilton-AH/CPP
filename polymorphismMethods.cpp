#include <iostream>

class Bird {
    public:
        virtual void Talk() const {
            std::cout << "A bird talks" << std::endl;
        }
        virtual void Fly() const {
            std::cout << "A bird flies" << std::endl;
        }
};

class Pigeon:public Bird {
    public:
        void Talk() const {
            std::cout << "Coo Coo" << std::endl;
        }
        void Fly() const {
            std::cout << "A pigeon flies away..." << std::endl;
        }
};

class Chicken:public Bird {
    public:
        void Talk() const {
            std::cout <<"Cluck Cluck" << std::endl;
        }
        void Fly() const {
            //backslash is used to escape the special characters
            std::cout <<"I\'m just a chicken, I can\'t fly!" << std::endl; 
        }
};

int main() {
    //base class pointers binding derived class objects
    Bird* ptrPigeon = new Pigeon();
    Bird* ptrChicken = new Chicken();

    ptrPigeon -> Talk();
    ptrPigeon -> Fly();
    ptrChicken -> Talk();
    ptrChicken -> Fly();
    ptrPigeon -> Bird::Talk();
    ptrPigeon -> Bird::Fly(); //inappropriate use of scope resolution operator(use capability class)

    return 0;
}
