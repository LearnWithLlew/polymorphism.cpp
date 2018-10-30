#include <iostream>
#include "Catch.hpp"

using namespace std;

namespace parameter_passing {


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

    void print(Shape s) {
        s.printMe();
    }

    TEST_CASE("ParameterPassing: Shape") {
        print(Shape());

    }

    TEST_CASE("ParameterPassing: Triangle") {
        print(Triangle());

    }

    void print_reference(Shape &s) {
        s.printMe();
    }

    TEST_CASE("ParameterPassing: reference") {
        Triangle t;
        print_reference(t);
    }

    void print_pointer(Shape *s) {
        s->printMe();
    }

    TEST_CASE("ParameterPassing: pointer") {
        Triangle t;
        print_pointer(&t);
    }
}