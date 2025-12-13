// Function overloading(compile time polyphism)
// #include<iostream>
// using namespace std;

// class Math{
//     public:
//     int add(int a , int b){
//         //  return a+b;
//         cout << a+b << endl;
//     }
//     float add(float a, float b){
//         // return a+b;
//         cout << a+b << endl;
//     }
// };
// int main(){
//     Math m;
// //    cout <<  m.add(10,20) << endl;
// //     cout << m.add(10.0f,20.0f) << endl;

// m.add(10,20);
// m.add(10.0f,30.0f);
// }

// =====================================

// Run time polymorphism(overriding)

// #include<iostream>
// using namespace std;

// class A{
//     public:
//     virtual void show(){
//       cout << "Class A\n";
//     }
// };
// class B: public A{
// public:
//     void show() override{
//       cout << "Class B\n";
//     }
// };
// int main(){
//     A* ptr;
//     B obj1;

//     ptr = &obj1;
//     ptr->show();

// }

// int a = 5;
// int *ptr;

// ptr = &a;

// int *ptr;


// ===============================================


// Abstraction :- 

// hiding implementation and showing only the necessary things.

// How we can acheive the abstraction
// 1. Abstract class 
// 2. pure virtual function

// #include<iostream>
// using namespace std;

// class Shape{
//   public:
//     virtual void area() =0;
// };
// class Circle : public Shape{
//   public:
//   void area(){
//       cout << "Area of Circle = pi*r*r" << endl;
//   }
// };
// int main(){
//    Shape* s= new Circle;
//    s->area();

//    return 0;
// }


// Question 1: Create an abstract class Vehicle

// Create an abstract class Vehicle with:
//  -> A pure virtual function: void start()
//  -> A normal function: void fuelType()
// Create two derived classes:
//  -> Car
//  -> Bike
// Override start() in both classes.
// In main(), create pointers of type Vehicle to call the functions.


// #include<iostream>
// using namespace std;
// class Vehicle{
//   public:
//    virtual void start() =0; // pure virtual function

//    void fuelType(){ // normal function
//     cout << "vehicle uses the fuel...." << endl;
//    }
// };
// class Car :public Vehicle {
//   void start(){
//     cout << "my car will start using key " << endl;
//   }
// };
// class Bike :public Vehicle{
//    void start(){
//     cout << "my Bike will start using self and kick" << endl;
//   }
// };
// int main(){
//   Vehicle* v;
//   v=new Car();
//   v->start();
//   v->fuelType();

//   v=new Bike();
//     v->start();
//   v->fuelType();

// }

// Question 2: Abstract Class for Payment System

// Create an abstract class Payment that has:
//  -> a pure virtual function: void makePayment(int amount)
//  -> a normal function: void paymentMessage()
// Create two derived classes:
//   -> UPI (prints "Paid using UPI")
//   -> Card (prints "Paid using Card")
// Call both classes through base class pointer in main().


// #include<iostream>
// using namespace std;
// class Payment{
//   public:
//    virtual void makePayment(int amount) =0; // pure virtual function

//    void paymentMessage(){ // normal function
//     cout << "Payment Processing...." << endl;
//    }
// };
// class UPI :public Payment {
//   void makePayment(int amount){
//     cout << "Rechange through the UPI " << amount << endl;
//   }
// };
// class Card :public Payment{
//    void makePayment(int amount){
//     cout << "Rechange through the Card " << amount << endl;
//   }
// };
// int main(){
//   Payment* p;
//   p=new UPI();
//   p->makePayment(500);
//   p->paymentMessage();

//   p=new Card();

//   p->makePayment(1000);
//   p->paymentMessage();

// }

// Question 3: Abstract Class for Employees

// Create an abstract class Employee with:
//  -> pure virtual function: void calculateSalary()

// Create 2 derived classes:
//   -> FullTimeEmployee
//       -> Takes monthly salary
//   -> PartTimeEmployee
//       -> Takes hours and pay-per-hour
// In main(), create objects (or base class pointer) and calculate salary for both types.


#include<iostream>
using namespace std;

class Employee{
  public:
   virtual void calculateSalary()=0;
};

class FullTimeEmployee:public Employee{
  int monthlySal;

  public:
   FullTimeEmployee(int salary){
     monthlySal =  salary;
   }

  void calculateSalary(){
    cout << "Full time Employee Salary :" << monthlySal << endl;
  }

};
class PartTimeEmployee :public Employee{
  int hours; // 5*1000
  int paymentPerhours;

  public:
  PartTimeEmployee(int h , int ph){
    hours = h;
    paymentPerhours = ph;
  }

  void calculateSalary(){
    cout << "Part time Employee Salary :" << hours*paymentPerhours  << endl;
  }
};

int main(){
   Employee* e;

   e= new FullTimeEmployee(30000);
   e->calculateSalary();

  e=new PartTimeEmployee(5,1000);
  e->calculateSalary();
}
