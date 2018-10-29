#include <iostream>
#include "Catch.hpp"

using namespace std;

namespace virtual_base_const1 {
    class Shape {
    public:

        virtual void printMe() const {
            std::cout << "Hello, I'm a shape";
        };
    };

    class Triangle : public Shape {
    public:

        void printMe() {
            std::cout << "Hello, I'm a Triangle";
        };
    };



    TEST_CASE("VirtualConst1: Shape") {
        Shape shape;
        shape.printMe();

    }

    TEST_CASE("VirtualConst1: Triangle") {
        Triangle shape;
        shape.printMe();

    }

    TEST_CASE("VirtualConst1: value") {
        Triangle triangle;
        Shape shape = triangle;
        shape.printMe();
    }

    TEST_CASE("VirtualConst1: reference") {
        Triangle triangle;
        Shape &shape = triangle;
        shape.printMe();
    }

    TEST_CASE("VirtualConst1: pointer") {
        Triangle triangle;
        Shape *shape = &triangle;
        shape->printMe();
    }
}
