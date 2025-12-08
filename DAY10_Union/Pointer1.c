// pointer to variable 

// #include<stdio.h>
// void main(){
//     int a = 5;
//     int *p;

//     p = &a;// p storing the address of a // *[2020]

//     printf("%d",*p);
// }

// ======================================

// pointer to pointer

// #include<stdio.h>
// void main(){
//     int a = 5;
//     int *ptr;
//    int  **ptr1;
//    int ***ptr2;

//    ptr = &a;// ptr storung the address of a 
//    ptr1 = &ptr;
//   ptr2= &ptr1;

//    printf("%d\n",a);// 5
//    printf("%d\n",*ptr);// 5
//    printf("%d\n",**ptr1);//5
//    printf("%d\n",***ptr2); 
// }

// ========================================

// 3. pointer to array 

#include<stdio.h>
void main(){
    int a[] = {10,20,30,40,50};
    int *ptr;

    ptr=&a[0];

    for(int i=0;i<5;i++){
        printf("%d\n",*ptr);
        ptr++;

        // printf("%d\n",a[i]);
    }
}