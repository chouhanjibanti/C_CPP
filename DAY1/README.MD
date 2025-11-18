C  :-

Dataype :- which type of value we are storing .


1 byte :- 8 bits

There are various types of data type 
1. Primary /basic 
   -> int    integer number  format :- %d -> 2 bytes
   -> float  decimal number format : %f  -> 4 bytes
   -> double decimal number  format :- %lf -> 8 bytes
   -> char single character   format :- %c  -> 1byte


2. Derived Datatype :- 
Datatype        use
Array   ->   store mutiple values
pointer -> stores memory address
Function -> int add(int a ,int b )  :- return data


3. void Datatype
used when a function returns nothing.

void showMessage(){
    printf("hello")
}


4. signed and unsigned Datatype

signed  -> we can use negative value
unsigned 

unsigned int age = 25; // we can not pass the negative value

====================================

Tokens in C :- 

tokens are the smallest block/unit  of c program

There are diff types of tokens :- 
1. Keywords
2. Identifier
3. Constants
4. String 
5. Operator
6. Special Symbols  

1. Keywords
 :- these are the reserved words -> already defined in c langauge.
you can not use keyword as a variable.

Example :- 
int , float , if , else , for , while , return , void , switch , break , continue

int age = 20;

=============================

2. Identifier
Names given by the programmer/developer.

Example :- Variable  , function , arrays 
int age1;
float salary;

Rules and Regulation :- 
1. Must start with lowercase 
2. can not start with number 
3. no spaces 
4. can not use keywords
5. case senditive (age != Age)

========================

3. Constants

Fixed value that do not change during the program execution.

=======================


4. String 

sequence of charcter inside double quotes.

Example 
let a1 = "hello"

=======================

5. Operator :- symbols used to perform operations.

Type :- 
1. Arithmetic -> +,-,*,/,%
2. Relational ->  > ,< ,>= , <= ,==
3. Logical -> && , || , !
4. Assignment -> sum = sum +i; sum+=i; += ,-= ,*=,/=
5. Incre/Decrement -> x++ , x-- , ++x , --x

=======================

6. Special Symbols  

() - function call
{} - block start/end
[] - Array indexing 
; - statement terminator / break
# - preprocessor
, - seperator 
* -> pointer 
& -> address operator


=======================================

Structure of c programming 

1. comments  // 
2. preprocessor directives
3. declaration
4. main function 

// program1 
// #include<stdio.h>
// int age = 20;
// int main(){
    // we will write the code inside this 
}










