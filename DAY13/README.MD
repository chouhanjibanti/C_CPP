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

