#include <iostream>
#include "Catch.hpp"

using namespace std;

namespace type_defs {
 typedef  void (*PrintMeFunction)();
 
     void shapePrintMe() {
        std::cout << "Hello, I'm a shape";
    };

    class Shape {
    public:
        Shape(): printMe(shapePrintMe){

        }
        PrintMeFunction printMe;

    };
        void trianglePrintMe() {
        std::cout << "Hello, I'm a Triangle";
    };
    class Triangle: public Shape{
    public:

        Triangle() {
            printMe= trianglePrintMe;
        }
    };
    void printSquare(){
    std::cout << "Hello, I'm a Square";
    }
    Shape createSquare(){
        Shape s;
        s.printMe = printSquare;
        return s;
    }


    class Pentagon: public Shape{
    public:
        static void pentagonPrintMe() {
            std::cout << "Hello, I'm a Triangle";
        };
        Pentagon() {
            printMe= pentagonPrintMe;
        }
    };

Shape createSquare2(){
    static auto method = [](){std::cout << "Hello, I'm a Square";};
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