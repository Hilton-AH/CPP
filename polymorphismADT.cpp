#include <iostream>

//ADT Abstract Data Type by initializing "pure virtual methods" with "= 0"
class Shape {
    public:
        virtual int getArea() = 0;
        virtual int getEdge() = 0;
        virtual void Draw() = 0;
};

class Quadrilateral: public Shape {
    private:
        int width;
        int height;
    
    //constructor
    public:
        Quadrilateral(int initialWidth, int initialHeight) {
        width = initialWidth;
        height = initialHeight;
    }
    
    //destructor
    ~Quadrilateral();

    //methods to override pure virtual methods
    int getArea() {
        return width * height;
    }

    int getEdge() {
        return 2 * (width + height);
    }

    void Draw() {
        for (int i=0; i<height; i++) {
            for (int j=0; j<width; j++) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
        }
};

int main() {
    Shape* ptrRectangle = new Quadrilateral(5, 10);
    Shape* ptrSqaure = new Quadrilateral(5, 5);

    ptrRectangle -> Draw();
    std::cout << "Area: " << ptrRectangle -> getArea() << std::endl;
    std::cout << "Perimeter: " << ptrRectangle -> getEdge() << std::endl;

    ptrSqaure -> Draw();
    std::cout << "Area: " << ptrSqaure -> getArea() << std::endl;
    std::cout << "Perimeter: " << ptrSqaure -> getEdge() << std::endl;

    return 0;
}



