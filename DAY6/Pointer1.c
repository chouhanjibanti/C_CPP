// // Simple Example of the pointer 

// #include<stdio.h>
// int main(){
//     int a = 10;
//     int *p;// pointer declaration

//     p = &a;// address of a stored in the p variable

//     printf("Value of a = %d\n",a);
//     printf("Address of a= %p\n",&a);
//     printf("Pointer p is storing =  %p\n",p);
//     printf("Value at addres store in p = %d\n", *p);
// }

// ==============================================

// 2. pointer with function (Call by reference)

// #include<stdio.h>

// void changeValue(int *x){
//     *x = 50;
// }

// int main(){
//     int a = 10;
//     printf("before :%d\n",a);
//     changeValue(&a); // call by value  // call by reference
//     printf("After : %d",a);
// }

// =======================================================

// Swap two number using the pointer 
// #include<stdio.h>
// void swap(int *a,int *b);

// int main(){
//     int a , b;

//     printf("Enter the value of a and b :");
//     scanf("%d%d", &a,&b);

//     printf("Before swaping in main -> a= %d , b = %d\n",a,b);

//     swap(&a,&b);// call by references 

//     printf("After swaping in main -> a= %d , b = %d\n",a,b);

//     return 0;

// }
// // a = 10[2022]    b = 20 [2030]
// void swap(int *a,int *b){ // addres -> value 
//     int c;
//      c = *a; // c= 10
//      *a = *b; // *a=  20
//      *b = c; // *b= 10
// }

// ====================================

// Simple interest in pointer 

#include<stdio.h>
void simple(float *p,float *r,float *t);
int main(){
    float a , b , c;
    printf("Enter the value of principla, rate and time \n");
    scanf("%f%f%f",&a,&b,&c);

    simple(&a,&b,&c);
    return 0;
}

void simple(float *p,float *r, float *t){
    float si;
    si = ((*p)*(*r)*(*t))/100;
    printf("Simple interst = %f\n",si);
}