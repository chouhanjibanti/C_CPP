// hirarchical inheritance :- 

// #include<iostream>
// using namespace std;

// class A{
// public: 
//     void showA(){
//         cout << "This is parent class A\n";
//     }
// };
// class B:public A{
// public:
//     void showB(){
//         cout << "This is child class B\n";
//     }
// };
// class C:public A{
// public:
//     void showC(){
//         cout << "This is child class C\n";
//     }
// };
// int main(){
//     B obj1;
//     C obj2;

//     obj1.showA();
//     obj1.showB();

//     obj2.showA();
//     obj2.showC();
// }

// =============================================================

// Q1. Class Shape → Circle & Rectangle
// Shape: input values
// Circle: calculate area of circle
// Rectangle: calculate area of rectangle
// Use separate objects for Circle and Rectangle.

// #include<iostream>
// using namespace std;

// class Shape{
//     public: 
//        double value1 , value2;

//        void input(double v1 , double v2){
//             value1 = v1;
//             value2 = v2;
//        }
// };
// // child classs circle
// class Circle:public Shape{
//     public:
//     void areaOfCircle(){
//         double area = 3.14 * value1 * value1;
//         cout << "Area of Circle = "<< area << endl;
//     }
// };
// // child class rectangle
// class Rectangle:public Shape{
//     public:
//     void areaOfRectangle(){
//        double area = value1 * value2;
//         cout << "Rectangle of Circle = "<< area << endl;
//     }
// };

// int main(){
//     Circle c ;
//     Rectangle r;

//     c.input(5,0);
//     c.areaOfCircle();

//     r.input(10,20);
//     r.areaOfRectangle();

// }