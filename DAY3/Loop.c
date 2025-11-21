// #include <stdio.h>
// void main()
// {
//     printf("hello\n");
//     printf("hello\n");

//     printf("hello\n");

//     printf("hello\n");

//     printf("hello\n");

//     printf("hello\n");

//     printf("hello\n");

//     printf("hello\n");

//     printf("hello\n");

//     printf("hello\n");

//     printf("hello\n");
// }

// 8. Write a program to find the factorial of number where number is 6.
// 5 -> 5*4*3*2*1 = 120
// #include<stdio.h>
// void main(){
//    int value; // 5
//    int fact =1;
//    printf("Enter any value...");
//    scanf("%d",&value);
//    for(int i=1;i<=value;i++){// i=1  1<=5 T // i=2 2<=5 // i=3 // i=4 // i=5 // i=6 F
//       fact = fact*i; // fact = 1 // fact = 2 // fact  = 6 // fact = 24 // fact = 120
//    }
//    printf("factorial of the number = %d" , fact);
// }

// 10. Write a program of faboncci series.
// a =0 b = 1  0,1,1,2,3,5,8,13,21.......
// #include <stdio.h>
// void main()
// {
//     int a = 0, b = 1;
//     printf("%d",a);
//     printf("%d",b);
//     for (int i = 0; i <= 10; i++)
//     {
//         int temp = a + b; // temp = 0+1 = 1 // temp = 1+1 = 2
//         a = b;            // a= 1 // a= 1
//         b = temp;         // b = 1 // b = 2
//             printf("%d\n",b);
//     }
// }
