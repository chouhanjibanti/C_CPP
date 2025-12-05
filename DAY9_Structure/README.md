what is structure :- 

A structure is a collection of heteogenous data type.

Note :- 
An array stored same type data (all int , all char)
A structure stored different type data together

Example :- 
struct student {
    name -> string 
    age ->  int
    roll no -> int 
}


Note L- 
how we can defined the structure ?
   always use struct keyword

   struct student {
      char name[20];
      int age;
      int rollno;
   }


   creating structure variable :- 
 we can do in 2 ways :-
 first :- struct student s; 

 second :- 
   struct student {
      char name[20];
      int age;
      int rollno;
   } s; //  structure variable created 

   ===============================================

Accessing structure member  : Use the (.) dot operator

s.name;
s.age;
s.rollno;
