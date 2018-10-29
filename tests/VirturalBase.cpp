#include <iostream>
#include "Catch.hpp"

using namespace std;

class VirtualBaseShape {
public:

    virtual void printMe()  {
        std::cout << "Hello, I'm a shape" ;
    };
};

class VirtualBaseTriangle : public VirtualBaseShape {
public:

    void printMe()  {
        std::cout << "Hello, I'm a Triangle";
    };
};


TEST_CASE("VirtualBase: Shape") {
    VirtualBaseShape shape;
    shape.printMe();

}

TEST_CASE("VirtualBase: Triangle") {
    VirtualBaseTriangle shape;
    shape.printMe();

}

TEST_CASE("VirtualBase: value") {
    VirtualBaseTriangle triangle;
    VirtualBaseShape shape = triangle;
    shape.printMe();
}
TEST_CASE("VirtualBase: reference") {
    VirtualBaseTriangle triangle;
    VirtualBaseShape& shape = triangle;
    shape.printMe();
}

TEST_CASE("VirtualBase: pointer") {
    VirtualBaseTriangle triangle;
    VirtualBaseShape* shape = &triangle;
    shape->printMe();
}

