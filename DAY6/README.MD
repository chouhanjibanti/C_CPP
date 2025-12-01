Pointer :- 

A pointer is a varible that stores the memory address of another variable.

Pointer :- memory -> C -> low level langauge - communicate 

-> Normal variable store value 
-> Pointer variable stores address(memory location)

Example :- 

int a = 5;     a - 2022  

int b = 10;      b - 2030

Asterisk:- :- * is used to access the value at the stored address(also called dereferecing operator)

Example :- 
int a = 5; -> value = 5   , variable name = a , datatype int , address [*x] = 2022 
int *ptr; // created the pointer variable of the int types who store only int type value
ptr = &a;  -> where ptr store the address of a.

=========================
If i want to print the address :- "%p"

========================

void main(){
    printf("enter value of a and b");
     scan("%d%d",&a,&b);
    }