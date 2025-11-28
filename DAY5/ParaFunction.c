// Paramterized Function
//    -> Call by value 
//    -> Call by references

// call by value ()

#include<stdio.h>
void add(int a,int b);
void sub(int a ,int b);

void main(){
    int a,b;
    printf("Enter the values of a & b :\n");
    scanf("%d%d",&a,&b);

    add(a,b);
    sub(a,b);
}

void add(int a ,int b){
    int c = a+b;
    printf("Sum = %d\n",c);
}

void sub(int a , int b){
    int c = a-b;
    printf("Subtract = %d\n",c);
}

// WAP to check number is palindrome , armstromg or prime or not using the paramterized function.