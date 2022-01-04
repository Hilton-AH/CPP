#include <iostream>

/*capability class sole purpose is to allow other classes to be derived from it
* capability class generally contain no data, just virtual functions to be overridden
* base capabilty class containing virtual method declarations that signal error if called explicitly
* derived classes overriding methods must return the same type as the base class
*/
class Bird {
    public:
        virtual int Talk() const {
            return -1;
        }
        virtual int Fly() const {
            return -1;
        }
};

class Pigeon: public Bird {
    public:
        int Talk() const {
            std::cout << "Coo Coo" << std::endl;
            return 0;
        }
        int Fly() const {
            std::cout << "A pigeon flies away..." << std::endl;
            return 0;
        }
};

class Chicken: public Bird {
    public:
        int Talk() const {
            std::cout <<"Cluck Cluck" << std::endl;
            return 0;
        }
        int Fly() const {
            //backslash is used to escape the special characters
            std::cout <<"I\'m just a chicken, I can\'t fly!" << std::endl; 
            return 0;
        }
};

int main() {
    Bird* ptrPigeon = new Pigeon();
    Bird* ptrChicken = new Chicken();

    ptrPigeon -> Talk();
    ptrChicken -> Talk();

    ptrPigeon -> Bird::Talk();
    if(-1) {
        std::cout << "Error: Program ended" << std::endl;
        return 0;
    }

    ptrPigeon -> Fly();     //call will not be made
    ptrChicken -> Fly();    //call will not be made

    return 0;   //statement will not be executed
}