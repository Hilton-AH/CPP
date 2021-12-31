#include <iostream>
#include <string>

class Dog {
    //private data members by default
    int age;
    int weight;
    std::string color;

    //accessor and mutator functions
    public:
        
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

int main() {
    Dog fido; //create object of Dog class(instance)
    fido.setAge(3); //set age to 3
    fido.setWeight(20); //set weight to 20
    fido.setColor("brown"); //set color to brown

    //access data members of object using accessor functions
    std::cout << "Fido is a " << fido.getColor() << " dog" << std::endl;
    std::cout << "Fido is " << fido.getAge() << " years old" << std::endl;
    std::cout << "Fido weighs " << fido.getWeight() << " pounds" << std::endl;
    
    fido.bark(); //call bark method

    return 0;
}