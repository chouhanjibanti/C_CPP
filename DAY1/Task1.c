// 4. WAP to find the area of circle. pi*r*r
// 5. WAP to swap two numbers using the third number.
// 6. WAP to swap two numbers without using the third number.
// 7. WAP to find the average of the students. 
// 8. WAP to find the area of square.
// 9. WAP to find the ascii value of the character.

// 5. WAP to swap two numbers using the third number.

// #include<stdio.h>
// void main(){
//     int a , b ,c;
//     printf("Enter the value of a,b");
//     scanf("%d%d",&a,&b);
//     printf("value of a before swaping= %d\n value of b before swaping =%d\n",a,b);
//     c = a;// c= 10
//     a= b; // a = 20
//     b = c;// b = 10
//     printf("value of a after swaping= %d\n value of b after swaping =%d\n",a,b);
// }

// 6. WAP to swap two numbers without using the third number.
// #include<stdio.h>
// void main(){
//     int a , b ;
//     printf("Enter the value of a,b");
//     scanf("%d%d",&a,&b);
//     printf("value of a before swaping= %d\n value of b before swaping =%d\n",a,b);
//     a = a+b;// a = 10 b = 20  => a= 30
//     b = a-b; // b= 30-20 = 10
//     a = a-b; // a = 30-10 = 20
//     printf("value of a after swaping= %d\n value of b after swaping =%d\n",a,b);
// }

// 7. WAP to find the average of the students. 

#include<stdio.h>
void main(){
    float a , b ,c ,d , avg, t;
        printf("Enter the value of a,b,c,d");
        scanf("%f%f%f%f",&a,&b,&c,&d);
        t = (a+b+c+d);
        avg = (t/4);
        printf("Percentage of Student = %f\n",avg);
}


// 9. WAP to find the ascii value of the character.
//ASCII :-  Amercian standard code information interchange
// A = 65     +32 // a = 97
// #include<stdio.h>
// void main(){
//     char ch = 'A';
//     printf("Ascii value of %c = %d\n",ch,ch);
// }




