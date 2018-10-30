#include <iostream>
#include "Catch.hpp"

using namespace std;

namespace normal {


    class Shape {
    public:

        void printMe()  {
            std::cout << "Hello, I'm a shape";
        };
    };

    class Triangle : public Shape {
    public:

        void printMe()  {
            std::cout << "Hello, I'm a Triangle";
        };
    };


    TEST_CASE("Normal: Shape") {
        Shape shape;
        shape.printMe();

    }

    TEST_CASE("Normal: Triangle") {
        Triangle shape;
        shape.printMe();

    }

    TEST_CASE("Normal: value") {
        Triangle triangle;
        Shape shape = triangle;
        shape.printMe();
    }

    TEST_CASE("Normal: reference") {
        Triangle triangle;
        Shape &shape = triangle;
        shape.printMe();
    }

    TEST_CASE("Normal: pointer") {
        Triangle triangle;
        Shape *shape = &triangle;
        shape->printMe();
    }
}

