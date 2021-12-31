#include <iostream>
#include <string>

class Dog {
    //private data members by default
    int age;
    int weight;
    std::string color;

    //access modifier(public, private, protected)
    public:

        //constructor method prototype
        Dog(int, int, std::string);
        
        //default constructor method prototype
        Dog();

        //overloaded constructor method prototype
        Dog(int, int);

        //destructor method prototype
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

        //inline overloaded bark method
        void bark(std::string noise) {
            std::cout << noise << std::endl;
        }
};

//default constructor method(no argument)
Dog::Dog() {
    age = 1;
    weight = 2;
    color = "black";
}

//overloaded constructor method(passing two arguments)
Dog::Dog(int age, int weight) {
    this -> age = age;
    this -> weight = weight;
    color = "white";
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

    //object of Dog class from default constructor
    Dog rex; //do not add parenthesis if no argument is passed
    std::cout << "Rex is a " << rex.getColor() << " dog" << std::endl;
    std::cout << "Rex is " << rex.getAge() << " years old" << std::endl;
    std::cout << "Rex weighs " << rex.getWeight() << " pounds" << std::endl;

    //object of Dog class from overloaded constructor method
    Dog sammy(2,6);
    std::cout << "Sammy is a " << sammy.getColor() << " dog" << std::endl;
    std::cout << "Sammy is " << sammy.getAge() << " years old" << std::endl;
    std::cout << "Sammy weighs " << sammy.getWeight() << " pounds" << std::endl;

    
    //call bark method
    fido.bark(); 
    pooch.bark();
    rex.bark("Grrrrrr"); //calling overloaded bark method
    sammy.bark("Bowowowow");


    return 0;
}