#include <iostream>
#include "Catch.hpp"

using namespace std;

namespace virtual_base {


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


    TEST_CASE("VirtualBase: Shape") {
        Shape shape;
        shape.printMe();

    }

    TEST_CASE("VirtualBase: Triangle") {
        Triangle shape;
        shape.printMe();

    }

    TEST_CASE("VirtualBase: value") {
        Triangle triangle;
        Shape shape = triangle;
        shape.printMe();
    }

    TEST_CASE("VirtualBase: reference") {
        Triangle triangle;
        Shape &shape = triangle;
        shape.printMe();
    }

    TEST_CASE("VirtualBase: pointer") {
        Triangle triangle;
        Shape *shape = &triangle;
        shape->printMe();
    }
}