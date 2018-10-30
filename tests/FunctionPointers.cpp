#include <iostream>
#include "Catch.hpp"

using namespace std;

namespace function_pointers {

    void shapePrintMe() {
        std::cout << "Hello, I'm a shape";
    };

    class Shape {
    public:
        Shape() : printMe(shapePrintMe) {

        }

        void (*printMe)();

    };

    void trianglePrintMe() {
        std::cout << "Hello, I'm a Triangle";
    };

    class Triangle : public Shape {
    public:
        Triangle() {
            printMe = trianglePrintMe;
        }
    };




    TEST_CASE("FunctionPointers: Shape") {
        Shape shape;
        shape.printMe();


    }
    TEST_CASE("FunctionPointers: Triangle") {
         Triangle shape;
        shape.printMe();


    }

    TEST_CASE("FunctionPointers: Value") {
        Triangle triangle;
        Shape shape = triangle;
        shape.printMe();


    }
}