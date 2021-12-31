#include <iostream>
#include <string>

class Dog {
    //private data members by default
    int age;
    int weight;
    std::string color;

    //access modifier(public, private, protected)
    public:
        //accessor functions
        int getAge() {
            return age;
        }
    
        int getWeight() {
            return weight;
        }

        std::string getColor() {
            return color;
        }

        //setter prototype
        void setValues(int, int, std::string);
        
        //method of class Dog
        void bark() {
            std::cout << "Woof!" << std::endl;
        }
};

//setter definition for prototype (convienent to combine all accessors in one function)
//this -> refers to the class member variable
//:: refers to the scope operator for the class where it is defined
void Dog::setValues(int age, int weight, std::string color) {
    this -> age = age;
    this -> weight = weight;
    this -> color = color;
}

int main() {
    //object of Dog class(instance)
    Dog fido; 
    fido.setValues(3, 15, "brown"); 
    //access data members of object using accessor functions
    std::cout << "Fido is a " << fido.getColor() << " dog" << std::endl;
    std::cout << "Fido is " << fido.getAge() << " years old" << std::endl;
    std::cout << "Fido weighs " << fido.getWeight() << " pounds" << std::endl;

    //object of Dog class(instance)
    Dog pooch;
    pooch.setValues(1, 10, "white");
    //access data members of object using accessor functions
    std::cout << "Pooch is a " << pooch.getColor() << " dog" << std::endl;
    std::cout << "Pooch is " << pooch.getAge() << " years old" << std::endl;
    std::cout << "Pooch weighs " << pooch.getWeight() << " pounds" << std::endl;

    
    //call bark method
    fido.bark(); 
    pooch.bark();

    return 0;
}