#include <iostream>
#include "Catch.hpp"

using namespace std;

namespace return_values {


    class Shape {
    public:

        virtual void printMe() {
            std::cout << "Hello, I'm a shape";
        };
    };

    class Triangle : public Shape {
    public:

        void printMe() {
            std::cout << "Hello, I'm a Triangle";
        };
    };

    Shape createShape(){
        return Triangle();
    }


    TEST_CASE("ReturnValues: Shape") {
         Shape shape = createShape();
        shape.printMe();


    }
    Triangle triangle;
    Shape& createTriangle(){
        return triangle;
    }
    TEST_CASE("ReturnValues: Triangle") {
        createTriangle().printMe();

    }


    Shape* createTrianglePointer(){
        Triangle t;
        return &t;
    }


    TEST_CASE("ReturnValues: pointer1") {
        Shape *pShape = createTrianglePointer();
        pShape->printMe();
    }


    Shape* createNewTrianglePointer(){
       return new Triangle();
    }


    TEST_CASE("ReturnValues: pointer") {
        createNewTrianglePointer()->printMe();
    }
}