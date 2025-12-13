Polymorphism :-  poly means many , morphism :- form

Definition :- one function or operator showing different behavious in different situation.

Types:-
1. Compile time polymorphism
2. Run time polymorphism
3. Function overloading 
4. Operator overloading
5. Function overriding (using virtual function)

Example :- function overloading 


=============================


Run-time Polymorphism (Overriding) – 

Q1. Shape Area Calculator (Using Overriding)

Create a base class Shape with a virtual function area().
Create derived classes Circle and Rectangle overriding area().
Use a base class pointer to access derived class objects and display their areas.


Q2. Vehicle Horn Sound System

Create a base class Vehicle with virtual function horn().
Create classes Car, Bike, and Truck overriding the horn() function.
Use a base pointer to call the function.

Q3. Employee Salary Calculation

Create a base class Employee with virtual function salary().
Create derived classes:
 -> FullTimeEmployee
 -> PartTimeEmployee
Both should override salary().
Call using Employee ptr*.


Q4. Animal , cat and Dog Example
Animal - parent class -animal makes sounds
Dog , cat - child classes   -> Dog barks , cat meows
Use a base pointer to call the function.


===================================================


Abstraction Example:- 


Question 1: Create an abstract class Vehicle

Create an abstract class Vehicle with:
 -> A pure virtual function: void start()
 -> A normal function: void fuelType()
Create two derived classes:
 -> Car
 -> Bike
Override start() in both classes.
In main(), create pointers of type Vehicle to call the functions.


Question 2: Abstract Class for Payment System

Create an abstract class Payment that has:
 -> a pure virtual function: void makePayment(int amount)
 -> a normal function: void paymentMessage()
Create two derived classes:
  -> UPI (prints "Paid using UPI")
  -> Card (prints "Paid using Card")
Call both classes through base class pointer in main().



Question 3: Abstract Class for Employees

Create an abstract class Employee with:
 -> pure virtual function: void calculateSalary()

Create 2 derived classes:
  -> FullTimeEmployee
      -> Takes monthly salary
  -> PartTimeEmployee
      -> Takes hours and pay-per-hour
In main(), create objects (or base class pointer) and calculate salary for both types.



=================================================================


OOPS :- object orinted programming paradiam where we can use the class and object.

pillars :- 
1. Encapsulation : bind the data member and member function with in the single unit.
2. Inheritance :- Aquiring the properties of the parent class into the child class.
types of Inheritance :- 
 -> Single -> 2 clases 
-> Multiple -> one subclass having multiple superclass
-> MultiLevel -> 3 to 4 classes
-> heirarchical -> one superclass having multiple superclass
-> hybrid  -> combination of any two inheritance.


3. Polymorphism :- one object can behave in the different forms in different places.
Compile time polymorphism -> function overloading 
Run time polymorphism -> function overriding 

4. Abstraction  :- Hiding the implentation , only showing the necesaary things.


Constructor :- Constructor is similar like to className.
               when object is created constructor called automatically.
               for the value initilization.

