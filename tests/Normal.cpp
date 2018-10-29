#include <iostream>
#include "Catch.hpp"

using namespace std;

class NormalShape {
public:

    void printMe() const {
        std::cout << "Hello, I'm a shape" ;
    };
};

class NormalTriangle : public NormalShape {
public:

    void printMe() const {
        std::cout << "Hello, I'm a Triangle";
    };
};


TEST_CASE("Normal: Shape") {
    NormalShape shape;
    shape.printMe();

}

TEST_CASE("Normal: Triangle") {
    NormalTriangle shape;
    shape.printMe();

}

TEST_CASE("Normal: value") {
    NormalTriangle triangle;
    NormalShape shape = triangle;
    shape.printMe();
}
TEST_CASE("Normal: reference") {
    NormalTriangle triangle;
    NormalShape& shape = triangle;
    shape.printMe();
}

TEST_CASE("Normal: pointer") {
    NormalTriangle triangle;
    NormalShape* shape = &triangle;
    shape->printMe();
}

