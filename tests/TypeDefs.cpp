#include <iostream>
#include "Catch.hpp"

using namespace std;

namespace type_defs {
    typedef void (*PrintMeFunction)();


    class Shape {
    public:
        Shape() : printMe(shapePrintMe) {

        }

        static void shapePrintMe() {
            std::cout << "Hello, I'm a shape";
        };
        PrintMeFunction printMe;

    };


    class Triangle : public Shape {
    public:

        Triangle() {
            printMe = trianglePrintMe;
        }

        static void trianglePrintMe() {
            std::cout << "Hello, I'm a Triangle";
        };
    };

    void printSquare() {
        std::cout << "Hello, I'm a Square";
    }

    Shape createSquare() {
        Shape s;
        s.printMe = printSquare;
        return s;
    }


    class Pentagon : public Shape {
    public:
        static void pentagonPrintMe() {
            std::cout << "Hello, I'm a Pentagon";
        };

        Pentagon() {
            printMe = pentagonPrintMe;
        }
    };

    Shape createSquare2() {
        static auto method = []() { std::cout << "Hello, I'm a Square"; };
        Shape s;
        s.printMe = method;
        return s;
    }

    TEST_CASE("TypeDefs: Shape") {
        Shape shape;
        shape.printMe();


    }

    TEST_CASE("TypeDefs: Triangle") {
        Triangle shape;
        shape.printMe();


    }

    TEST_CASE("TypeDefs: Value") {
        Triangle triangle;
        Shape shape = triangle;
        shape.printMe();


    }

    TEST_CASE("TypeDefs: Factory Pattern") {
        Shape shape = createSquare();
        shape.printMe();
    }

    TEST_CASE("TypeDefs: Factory Pattern with lambdas") {
        Shape shape = createSquare2();
        shape.printMe();
    }
}