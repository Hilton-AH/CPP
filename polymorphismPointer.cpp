#include <iostream>
using namespace std;

class Base {
    public:
        void Identity(int adr) const {
            cout << "Base class called by 0x" << hex << adr << endl; //hex=output manipulator
        }
};

class SubA: public Base {

};

class SubB: public Base {

};

int main() {
    //two base class pointers binding to a specific instance of a derived class
    Base* ptrA = new SubA;
    Base* ptrB = new SubB;

    //-> class pointer operator to call a method of the base class
    //hexadecimal address of the object passed as int then displayed in hexadecimal by std::hex
    //clang compiler will throw error 64bit pointer cast to 32bit int loses information
    //thus include (size_t)
    ptrA -> Identity((int)(size_t) &ptrA);
    ptrB -> Identity((int)(size_t) &ptrB);

    return 0;
}

