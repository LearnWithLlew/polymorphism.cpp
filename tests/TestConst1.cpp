//#include <iostream>
//#include "Catch.hpp"
//
//using namespace std;
//
//class VirtualShape {
//public:
//    std::string name;
//
//    NormalShape(std::string name) : name(name) {
//
//    }
//
//    virtual void printMe()  {
//        std::cout << "Hello, I'm a shape named " << name << "\n";
//    };
//};
//
//class BasicTriangle : public NormalShape {
//public:
//    BasicTriangle(std::string name) : NormalShape(name) {
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
//    NormalShape* shape = &triangle;
//    shape->printMe();
//
//}
