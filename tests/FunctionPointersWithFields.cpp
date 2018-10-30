#include <iostream>
#include "Catch.hpp"

using namespace std;

namespace type_defs_with_fields {
    class Shape;

    typedef void (*PrintMeFunction)(const Shape &that);


    class Shape {
    public:

        Shape(std::string name) : printMeFunction(shapePrintMe), name(name) {

        }

        std::string name;
        PrintMeFunction printMeFunction;

        void printMe() {
            printMeFunction(*this);
        }

        static void shapePrintMe(const Shape &that) {
            std::cout << "Hello, I'm a shape named " << that.name;
        };
    };

    class Triangle : public Shape {
    public:

        Triangle(std::string name) : Shape(name) {
            printMeFunction = trianglePrintMe;
        }

        static void trianglePrintMe(const Shape &that) {
            std::cout << "Hello, I'm a triangle named " << that.name;
        };

    };


    TEST_CASE("TypeDefsWithFields: Shape") {
        Shape shape("Mr.ug");
        shape.printMe();


    }

    TEST_CASE("TypeDefsWithFields: Triangle") {
        Triangle triangle("Mr.ug");
        Shape shape = triangle;
        shape.printMe();


    }


}