#include <iostream>
using std::cout; using std::endl;

class Parent {
    public:
        void Common() const {
            cout << "I am part of this family" << endl;
        }

        //virtual keyword is used to override this method in the derived class
        virtual void Identity() const {
            cout << "I am the parent" << endl;
        }
};

class Child: public Parent {
    public:
        void Identity() const {
            cout << "I am the child" << endl;
        }
};

//inherits from Child class, which inherits from Parent class
class GrandChild: public Child {
    public:
        void Identity() const {
            cout << "I am the grandchild" << endl;
        }

        void Relate() const {
            cout << "Grandchild has parent and grandparent" << endl;
        }
};

int main() {
    //Object/instance of each derived class
    Child son;
    GrandChild grandson;

    //Base class pointer pointing to a derived class object
    Parent* ptrChild = &son;
    Parent* ptrGrandChild = &grandson;

    //-> class pointer operator to call a method of the base class
    ptrChild -> Common(); //Inherited method
    ptrChild -> Identity(); //Overriding method
    ptrGrandChild -> Common(); //Inherited method
    ptrGrandChild -> Identity(); //Overriding method
    ptrChild -> Parent::Common(); //Explicit method using scope resolution operator
    ptrChild -> Parent::Identity(); //Explicit method using scope resolution operator
    grandson.Relate(); //via instance

    return 0;
}