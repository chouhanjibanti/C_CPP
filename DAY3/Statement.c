// #include<stdio.h>
// void main(){
//   int per;
//   printf("Enter the percentage...");
//   scanf("%d",&per);
//   if(per>=33 && per<=100)
//   {
//     printf("pass");
//   }
//   else{
//     printf("Fail");
//   }
// }

// 5. WAP to check year is leap or not.
// 7. WAP to check alphabat , digit  or special character.

// #include<stdio.h>
// void main(){
//     int year;
//     printf("Enter any year");
//     scanf("%d",&year);
//     if((year%4==0 && year%100!=0) || year%400==0){
//         printf("%d is a leap year",year);
//     }else{
//         printf("%d is not a leap year",year);
//     }
// }
// 2000 - l
// 1800 - n - l
// 1900

// 6. WAP to check small character or capital character.
// ASCII :- A-65   a - 97

// #include<stdio.h>
// void main(){
//    char ch;
//    printf("Enter any character\n");
//     scanf("%c",&ch);
//     if (ch>='A' && ch<='Z')
//     {

//        printf("character is capital = %c",ch);
//     }
//     else if (ch>='a' && ch<='z')
//     {
//        printf("character is small letter = %c",ch);
//     }
//     else
//     {
//         printf("Not a chracter..");
//     }
// }

// 7. WAP to check alphabat , digit  or special character.
// for the alphabat :- (ch>='A' && ch<='Z') ||  (ch>='a' && ch<='z')
// for the digit :- (ch>=0 && ch<=9)
// else :- print("special character")

// 8. WAP to check the division based on the percentange.
// per>=0 && per<33 -> Fail
// per>=33 && per<45 -> III
// per>=45 && per<60 -> II
// per>=60 && per<=100 -> I

// switch
// 9. WAP to create a calculator
#include <stdio.h>
void main()
{
    int a, b, c, value;
    printf("Press 1 for add\n");
    printf("Press 2 for sub\n");
    printf("Press 3 for mul\n");
    printf("Press 4 for div\n");

    scanf("%d", value);
    printf("Enter the value of a,b\n");
    scanf("%d%d", &a, &b);

    switch (value)
    {
    case 1:
        c = a + b;
        printf("Add =%d", c);
        break;
    case 2:
        c = a - b;
        printf("subtraction =%d", c);
        break;
    case 3:
        c = a * b;
        printf("Multiplication =%d", c);
        break;
    case 4:
        c = a / b;
        printf("Division =%d", c);
        break;

    default:
        break;
    }
}
