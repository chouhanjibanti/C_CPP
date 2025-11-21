// > , < , >= , <= 
// #include<stdio.h>
// void main(){
//     int a= 10;
//     int b =20;
//     if(a>b){
//     printf("a is greater");
//     }
// }

// ===================================================

// Assignnment
// #include<stdio.h>
// void main(){
//     int a= 10;
//    int b = 0;
//    b = b+a;// b+=a;
//   printf("value = %d\n",b);
// }

// ===================================================


// logical Operator 

// #include<stdio.h>
// void main(){
//     int a= 10;
//    int b = 20;
//    int c = 10;
//     AND Operator
//    if(a>10 && b >20){
//      printf("hello");
//    }

//     OR operator
// //      if(a>10 || b >=20){
// //      printf("hello");
// //    }

//      NOT Operator
// if(a!=10){
//        printf("hello");
//   }else{
//        printf("hy");
//   }
// }

// ===================================================



// Ternary Opertor 
// #include<stdio.h>
// void main(){
//     int a = 10 , b = 3;
//     a%b==0 ? printf("Even") : printf("odd");
// }

// ===================================================


// Increment and decrement
// post increment/ pre increment 
// post decrement / pre decrement

// post increment 
// #include<stdio.h>
// void main(){
//     int a = 10;
//    int a1 = a++;
//    int a2 = a + 10 +20 +a1;
//    printf("%d\n",a1);//10
//     printf("%d\n",a);// 11
//      printf("%d",a2);// 51
// }

// // ================================

// // pre increment 
// #include<stdio.h>
// void main(){
//     int a = 10;
//    int a1 = ++a;
//    printf("%d\n",a1);// 11
//     printf("%d\n",a);//11
// }

// // ===============================

// // pre decrement 
// #include<stdio.h>
// void main(){
//     int a = 100;
//    int a1 = --a;
//    int a2 = 200 + a1 + a -a ;
//    printf("%d\n",a1);// 99
//     printf("%d\n",a2);// 299
// }
// // ========================

// post decrement 
// #include<stdio.h>
// void main(){
//     int a = 100;
//    int a1 = a--;
//    int a2 = 200 + a1 + a -a ;
//    printf("%d\n",a1);// 100
//     printf("%d\n",a2);// 300
//       printf("%d\n",a);// 00
// }


// ===============================================

// Bitwise :-


// #include<stdio.h>
// void main(){
//     int a =5 , b = 4 , x;
//     x = a|b;
//    printf("value of a&b = %d",x);
// }


#include<stdio.h>
void main(){
    int a =7,x;
    x = ~a;
   printf("value of ~a = %d",x);
}

// 5  -> 0101
// 4  -> 0100
// 4 -> 0100