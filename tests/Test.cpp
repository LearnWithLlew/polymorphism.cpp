//#include <iostream>
//#include "Catch.hpp"
//
//using namespace std;
//
//class BasicShape {
//public:
//    std::string name;
//
//    BasicShape(std::string name) : name(name) {
//
//    }
//
//    void printMe() const {
//        std::cout << "Hello, I'm a shape named " << name << "\n";
//    };
//};
//
//class BasicTriangle : public Shape {
//public:
//    std::string name;
//
//    BasicTriangle() : Shape("BasicTriangle") {
//
//    }
//
//    void printMe() const {
//        std::cout << "Hello, I'm a Triangle named " << name<< "\n";
//    };
//};
//
//
//TEST_CASE("Say hello Shape") {
//    Shape shape("Mr.ug");
//    shape.printMe();
//
//}
//
//TEST_CASE("Say hello Triangle") {
//    BasicTriangle shape;
//    shape.printMe();
//
//}
//
//TEST_CASE("Say hello Triangle 3") {
//    BasicTriangle shape;
//    shape.name = "Pointy";
//    shape.printMe();
//}
//
//TEST_CASE("Say hello to slicing") {
//    BasicTriangle triangle;
//    triangle.name = "Isosceles";
//    Shape shape = triangle;
//    shape.printMe();
//}
//
//BasicTriangle get_triangle() {
//    BasicTriangle triangle;
//    triangle.name = "bermuda";
//    return triangle;
//}
//
//TEST_CASE("Say hello to triangle returns") {
//    get_triangle().printMe();
//}
//
//Shape get_shape() {
//    BasicTriangle triangle;
//    triangle.name = "bermuda";
//    //((BasicShape)triangle).name = "golden";
//    return triangle;
//}
//TEST_CASE("Say hello to shape returns") {
//    get_shape().printMe();
//}
//
//TEST_CASE("Say hello to named returns") {
//    Shape s = get_shape();
//    s.name = "love";
//    s.printMe();
//}
//
//Shape& get_shape_by_reference() {
//    BasicTriangle triangle;
//    triangle.name = "bermuda";
//    return triangle;
//}
//TEST_CASE("Say hello to shape by reference") {
//    Shape s = get_shape();
//    s.printMe();
//}
//
//void print_shape(Shape shape) {
//    shape.printMe();
//}
//TEST_CASE("call method by value") {
//    BasicTriangle triangle;
//    triangle.name = "Scalene";
//    print_shape(triangle);
//}
//
//void print_shape_reference(Shape& shape) {
//    shape.printMe();
//}
//TEST_CASE("call method by reference") {
//    BasicTriangle triangle;
//    triangle.name = "Wind";
//    print_shape_reference(triangle);
//}
//
//void print_shape_const_reference( Shape& shape) {
//    shape.printMe();
//}
//TEST_CASE("call method by const reference") {
//    BasicTriangle triangle;
//    triangle.name = "Wind";
//    print_shape_reference(triangle);
//}