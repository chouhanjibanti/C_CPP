// ## programs :-

// static array Example -
// 1-D Array :-

// #include<stdio.h>
// void main(){
//     int a[5] = {10,20,30,40,50};
//     int i;
//     for(i=0;i<5;i++){
//         printf("%d\n",a[i]);
//     }
// }

// WAP to print the sum of the array elements.

// WAP to Dynamic 1- D array
// #include<stdio.h>
// void main(){
//     int a[5];
//     int i, sum =0;

//     printf("Enter the array Elements");

//     for(i=0;i<5;i++){
//         scanf("%d",&a[i]);
//          sum = sum+a[i];
//     }
//      printf("Sum = %d\n",sum);
// }

// ==========================================

// WAP to  find the maxuimum and minimum element from the array ->Dynamic

// #include<stdio.h>
// void main(){
//     int a[5];
//     int i, min , max ;

//     printf("Enter the array Elements");

//     for(i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
// // 10 20 30 40 50
//     min = a[0];
//     max = a[0];
//     for(i=1;i<5;i++){
//         if(a[i]>max){ // 20>10 // 30>20
//             max = a[i]; // max = 20 // max = 30 // max = 50
//         }
//         if(a[i]<min){// 20<10 // 30<10 // 40<10 // 50<10
//             min = a[i]; // min = 10
//         }
//     }
//     printf("Maximum Element = %d\n",max);
//     printf("Minimum Element = %d\n",min);
// }

// ==================================================

// WAP to add two array - dynamic array

// arr = {10,20,30,40}
// arr1 = {1,2,3,4} -> {11,22,33,44}

// #include <stdio.h>
// void main()
// {
//     int a[5], b[5], c[5];
//     printf("Enter the Array elements of A\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter the Array elements of B\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &b[i]);
//     }

//     for(int i=0;i<5;i++){
//         c[i] = a[i]+b[i];
//       printf("%d\t",c[i]);

//     }

//     // printf("Addes Array of A and B");
//     // for(int i=0;i<5;i++){
//     //     printf("%d\t",c[i]);
//     // }
// }

// find the element from the array , index 
// Linear Search - it will work on sorted and unsorted 
// binary Search - it will work in the only sorted array

// linear search  - dynamic array 
// [10,20,30,40,50,100]
#include<stdio.h>
void main(){
    int a[5],key, found=0;
   printf("Enter the Array elements\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    // search number
    printf("Enter the number to search");
    scanf("%d",&key);// 50

    for(int i=0;i<5;i++){
        if(a[i] == key){ // 0 == 50
            printf("Element found at index %d and position %d\n",i,i+1);
            found =1;
            break;
        }
    }
    if(!found){
        printf("Element not found\n");
    }
}


