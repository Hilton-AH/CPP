#include <iostream>
#include <string>

class Man {
    public:
        //inline method
        void speak() {
            std::cout << "Hello" << std::endl;
        }

        //overloaded inline method
        void speak(std::string msg) {
            std::cout << " " << msg << std::endl;
        }
};

class Hombre: public Man {
    public:
        void speak(std::string msg) {
            std::cout << msg << std::endl;
        }
};

int main() {
    Man Henry; //instance of base clas
    Hombre Chavez; //instance of derived class

    //calling both methods of the base class
    Henry.speak();
    Henry.speak("It's a beautiful evening");

    //calling overridden method of the derived class
    Chavez.speak("Hola");

    //calling overridden method of the base class
    Chavez.Man::speak("Bendajo");


    return 0;
}