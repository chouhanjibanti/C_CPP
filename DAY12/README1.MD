Inheritance :- 
Definition :- 
one class (child class) aquires properties of another (parent class).


superclass -> parent class
subclass -> child class

Types of Inheritance :- 
1. Single Level Inheritance :- Inheritance with respect single level .
Example :- 
      A
      |
      B



2. Multilevel Inheritance :- Inheritance with respect multi level.
Example :- 
      A
      |
      B
      |
      C
   

3. Multiple Inheritance :- multiple super classes having one subclass.

      A     B
       \   /
        \/
         C



4. Hierarchical Inheritance :- one super clasess having multiple sub classs
  Example :- 
           A
         / | \
        B  C  D


5. Hybrid Inheritance :- Combination of any two inheritance is known as Hybrid inheritance.

      A     B
       \   /
        \/
         C
       / | \
      B  C  D


      ==================================================

Single Level Inheritance -

Questions :- 



SINGLE INHERITANCE — 3 Coding Questions

Q1. Create a class Animal and a derived class Dog.
Animal has a function eat()
Dog has a function bark()
Create an object of Dog and call both functions.

Q2. Class Person → class Student
Person has name, age
Student has roll number
Take input from user and display all details.

Q3. Base class Shape → derived class Rectangle
Shape contains function input() to take length & breadth
Rectangle contains function area() to calculate and print area.

===============================================


MULTILEVEL INHERITANCE - 3 Coding Questions 

Q1. Class Vehicle → Car → ElectricCar
Vehicle: function start()
Car: function speed()
ElectricCar: function battery()
Create object of ElectricCar and call all functions.



Q2. Class Human → Employee → Manager
Human: name, age
Employee: salary
Manager: bonus
Input all values and display full info using Manager object.


Q3. Class A → B → C
Class A: function fun1()
Class B: function fun2()
Class C: function fun3()
Call all 3 methods using object of C.

============================================

MULTIPLE INHERITANCE 

Q1. Create two parent classes: Teacher & Researcher
Teacher → function teach()
Researcher → function research()
Child class Professor inherits both → professorInfo()
Create object of Professor & call all three functions.


Q2. Class Engine & class Body → class Car
Engine: function enginePower()
Body: function bodyT ype()
Car: function carInfo()
Create object of Car & display all details.


Q3. Class Father & class Mother → class Child
Father: function sayFatherName()
Mother: function sayMotherName()
Child: function sayChildName()
Create object of Child & call all functions.
