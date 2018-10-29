//#include <iostream>
//#include "Catch.hpp"
//
//using namespace std;
//
//class VirtualShape {
//public:
//    std::string name;
//
//    Shape(std::string name) : name(name) {
//
//    }
//
//    virtual void printMe()  {
//        std::cout << "Hello, I'm a shape named " << name << "\n";
//    };
//};
//
//class BasicTriangle : public Shape {
//public:
//    BasicTriangle(std::string name) : Shape(name) {
//
//    }
//
//    virtual void printMe()   {
//        std::cout << "Hello, I'm a Triangle named " << name<< "\n";
//    };
//};
//
//
//TEST_CASE("Say Hello to const method") {
//    std::string name = "Obtuse";
//    BasicTriangle triangle(name);
//    Shape* shape = &triangle;
//    shape->printMe();
//
//}
