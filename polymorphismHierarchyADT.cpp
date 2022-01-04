#include <iostream>

//Abstract Data Type by initializing "pure virtual methods" with "= 0"
class Boat {
    protected:
        int length;
    //accessor
    public:
        int getLength() {
            return length;
        }
    //pure virtual method
    virtual void Model() = 0;
};

//Second abstract class
class Sailboat: public Boat {
    protected:
        int mast;
    public:
        int getMast() {
            return mast;
        }
    virtual void Boom() = 0;
};

class Laser: public Sailboat {
    public:
        //call to it's constructor to assign values from each class it's derived from
        Laser() {
            mast=19;
            length=35;
        }
        ~Laser();

        void Model() {
            std::cout << "Laser Classic" << std::endl;
        }
        void Boom() {
            std::cout << "Boom: 14ft" << std::endl;
        }
};

int main() {
    Laser* ptrLaser = new Laser();

    ptrLaser -> Model();
    std::cout << "Length: " << ptrLaser -> getLength() << "ft" << std::endl;
    std::cout << "Height: " << ptrLaser -> getMast() << "ft" << std::endl;
    ptrLaser -> Boom();

    return 0;
}