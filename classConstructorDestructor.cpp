#include <iostream>
#include <string>

class Dog {
    //private data members by default
    int age;
    int weight;
    std::string color;

    //access modifier(public, private, protected)
    public:

        //constructor prototype
        Dog(int, int, std::string);

        //destructor prototype
        ~Dog();
        
        
        //accessor/mutator functions
        int getAge() {
            return age;
        }

        void setAge(int years) {
            age = years;
        }
    
        int getWeight() {
            return weight;
        }

        void setWeight(int lbs) {
            weight = lbs;
        }

        std::string getColor() {
            return color;
        }

        void setColor(std::string hue) {
            color = hue;
        }
        
        //method of class Dog
        void bark() {
            std::cout << "Woof!" << std::endl;
        }
};

//constructor definition for prototype (convienent to combine all accessors in one function)
//this-> refers to the class member variable
//this-> is not needed if the argument and class member variables are different
//:: refers to the scope operator for the class where it is defined
Dog::Dog(int age, int weight, std::string color) {
    this -> age = age;
    this -> weight = weight;
    this -> color = color;
}

//destructor definition for prototype
Dog::~Dog() {
    std::cout << "Dog is destroyed" << std::endl;
}

int main() {
    //object of Dog class(passing values to constructor method)
    Dog fido(3,15,"brown");
    
    //access data members of object using accessor functions
    std::cout << "Fido is a " << fido.getColor() << " dog" << std::endl;
    std::cout << "Fido is " << fido.getAge() << " years old" << std::endl;
    std::cout << "Fido weighs " << fido.getWeight() << " pounds" << std::endl;

    //object of Dog class(passing values to constructor method)
    Dog pooch(1,10,"white");

    //access data members of object using accessor functions
    std::cout << "Pooch is a " << pooch.getColor() << " dog" << std::endl;
    std::cout << "Pooch is " << pooch.getAge() << " years old" << std::endl;
    std::cout << "Pooch weighs " << pooch.getWeight() << " pounds" << std::endl;

    
    //call bark method
    fido.bark(); 
    pooch.bark();

    return 0;
}