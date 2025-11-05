#include <iostream>
#include <cmath>
using namespace std;
// Abstract Base Class
class Shape {
public:
    virtual void calculateArea() = 0;  // Pure virtual function
};
// Derived Class: Circle
class Circle : public Shape {
    float radius;
public:
    Circle(float r) : radius(r) {}
    void calculateArea() override {
        cout << "Area of Circle = " << 3.14159 * radius * radius << endl;
    }
};
// Derived Class: Rectangle
class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    void calculateArea() override {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};
// Derived Class: Triangle
class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    }
};
int main() {
    Shape* shapePtr;  // Base class pointer
    Circle cir(7);
    Rectangle rect(5, 8);
    Triangle tri(6, 4);

    // Using base class pointer to call derived class methods
    shapePtr = &cir;
    shapePtr->calculateArea();

    shapePtr = &rect;
    shapePtr->calculateArea();

    shapePtr = &tri;
    shapePtr->calculateArea();
    return 0;
}
