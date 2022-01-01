#include <iostream>

//base/super class
class Polygon {
    protected:
        int width, height;
    public:
        void setValues(int w, int h) {
            width = w;
            height = h;
        }
};

//derived/child class
//: is different than :: which is used for scope resolution 
class Rectangle: public Polygon {
    public:
        int area() {
            return width * height;
        }
};

//derived/child class
class Triangle: public Polygon {
    public:
        int area() {
            return width * height / 2;
        }
};

int main() {
    Rectangle rect; //instantiate object
    Triangle trgl;  //instantiate object

    rect.setValues(4, 5);   //initialize object
    trgl.setValues(4, 5);   //initialize object

    std::cout << "Rectangle area: " << rect.area() << std::endl;
    std::cout << "Triangle area: " << trgl.area() << std::endl;

    return 0;
}

