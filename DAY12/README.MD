Cpp :- 

#include<iostream>
using namesoace std;

int main(){

}

C and c++ Difference:- 

c :- procedural oriented langauge
cpp :- Object oriented langauge

c :- Top - bottom approach
cpp :- bottom to up

c :- no classes and objects
cpp :- Supports classes and Objects

c :- no oops concepts
cpp :- support all oops concept

===============================================

OOPS :- object oriented programming paradiam that corelates to real time object and in the form of classes and objects.

OOPS :- main pillars 

1. Encapsulation
2. Inheritance
3. Polymorphism
4. Abstraction
5. Classes and Objects


Encapsulation :- Binding the data member and member function  together into a single unit(class).

Purpose :- Data Hiding , Security

Example :- 

==================================================


Questions Based on the Encapsulation :- 

Que :-1: Create a class Employee that hides salary and provides functions to set and get salary.

-> Use private: salary
-> Public functions: setSalary(), getSalary()

=============================================

Que:-2: Create a class Car that hides speed and fuel.

Write methods to:    
-> setSpeed()
-> setFuel()
-> showDetails()

Both speed and fuel must be private.

=============================================
Que :-3: Create a class Student with private marks of 3 subjects.

Write functions to:
-> setMarks()
-> calculateTotal()
-> calculatePercentage()
-> showResult()

Marks must not be accessed directly.

=============================================

Ques :-4: Create a class BankAccount that hides balance and allows only controlled deposits & withdrawals.

-> deposit(amount)
-> withdraw(amount)
-> showBalance()
-> Do not allow negative deposit/withdraw

=============================================

Ques :-5: Create a class Laptop which hides price and modelNumber.

Write methods to:
-> setData(price, modelNumber)
-> displayData()

Price should never be negative → validate in setter.
