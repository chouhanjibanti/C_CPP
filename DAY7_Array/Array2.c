// 2-D array Example 
// [
//  1 2    i=1  j=1    i=1 j=2
//  3 4    i=2  j=1     i=2  j=2
// ]

// #include<stdio.h>
// void main(){
//     int a[2][2] ;

// printf("Enter the Elememt of Matrix A:\n");
// for(int i=0;i<2;i++){
//     for(int j=0;j<2;j++){
//         scanf("%d", &a[i][j]);
//     }
// }

// printf("Elements of metrix A:\n");
//  for(int i=0;i<2;i++){
//     for(int j=0;j<2;j++){
//         printf("%d\t",a[i][j]);
//     }
//     printf("\n");
//  }
// }

// WAP to addition of two matrix and matrix will be 3*3

// #include<stdio.h>
// void main(){
//    int a[3][3] , b[3][3], c[3][3];

//    printf("Enter the Element of Matrix A(3*3):\n");
//    for(int i=0;i<3;i++){
//      for(int j=0;j<3;j++){
//        scanf("%d",&a[i][j]); // i=0 j=0 // i=0 j=1
//      }
//    }

//       printf("Enter the Element of Matrix B(3*3):\n");
//    for(int i=0;i<3;i++){
//      for(int j=0;j<3;j++){
//        scanf("%d",&b[i][j]); // i=0 j=0 // i=0 j=1
//      }
//    }

//    // Matrix Addition
//    for(int i=0;i<3;i++){
//      for(int j=0;j<3;j++){
//         c[i][j] = a[i][j] +b [i][j];
//         printf("%d\t",c[i][j]);
//      }
//      printf("\n");
//    }
// }

// WAP to print the diagonal matrix (3*3)
// 1 0 0 
// 0 1 0 
// 0 0 1

// #include<stdio.h>
// void main(){
//     printf("Diagonal matrix\n");

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(i==j){
//                 printf("1 ");
//             }else{
//                 printf("0 ");
//             }
           
//         }
//          printf("\n");
//     }
// }


// Matrix Multiplication 3*3 

// 1 2 3      4 3 2 
// 4 5 6      1 2 3 
// 1 2 1      5 4 6

// 21 23 34
// 45 67 65
// 


//  #include<stdio.h>
// void main(){
//    int a[3][3] , b[3][3], c[3][3];

//    printf("Enter the Element of Matrix A(3*3):\n");
//    for(int i=0;i<3;i++){
//      for(int j=0;j<3;j++){
//        scanf("%d",&a[i][j]); // i=0 j=0 // i=0 j=1
//      }
//    }

//       printf("Enter the Element of Matrix B(3*3):\n");
//    for(int i=0;i<3;i++){
//      for(int j=0;j<3;j++){
//        scanf("%d",&b[i][j]); // i=0 j=0 // i=0 j=1
//      }
//    }

//    // Matrix multiplication logic 
//    for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         int sum =0;
//         for(int k=0;k<3;k++){
//             sum = sum + a[i][k]*b[k][j]; // 21
//             // sum = sum + a[0][0] * b[0][0] // sum = 0+4
//             // sum = 4 + a[0][1]*b[1][1]
//             // sum = 20 + a[0][2]*b[2][2]
//         }
//         c[i][j] = sum;
//     }
//    }

//    printf("Result matrix : \n");
//    for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         printf("%d\t", c[i][j]);
//     }
//     printf("\n");
//    }

// }

// ==========================================

// Transpose Matrix :- 

// 1 2 3 
// 4 5 6 
// 7 8 9

// Answer :- 
// 1 4 7
// 2 5 8
// 3 6 9

// #include<stdio.h>
// int main(){
//   int a[3][3] , b[3][3];

//   printf("Enter the element fo matrix of A\n");
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//       scanf("%d", &a[i][j]);
//     }
//   }

// //  transpose logic
//    for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//        b[j][i] = a[i][j];  // b[0][0] = a[0] [0] //   b[1][0]=a[0][1]
//     }
//   }

//   printf("Normal Matrix\n ");
//    for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//       printf("%4d",a[i][j]);
//      }
//      printf("\n");
//   }

//   printf("transpose matrix \n");
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//       printf("%4d",b[i][j]);
//      }
//      printf("\n");
//   }

//    return 0;
// }

// ===================================================

// Bubble sort  - adjacent element compare , swap
// selection sort - min element find , position

// [3,2,1,9,8,4]
// [2,3,1,9,8,4]
// [2,1,3,9,8,4]
// [2,1,3,8,9,4]
// [2,1,3,8,4,9]


// #include<stdio.h>
// int main(){
//   int a[5]  = {9,5,8,3,6}; // {3,5,6,8,9}
//   int temp , flag; // when array is sorted

//   for(int i=0;i<4;i++){ // i=0 0<4 T
//     flag = 1;
//       for(int j=0;j<4-i;j++){ // j=0  0<4 // j=1 1<4
//          if(a[j]>a[j+1]){// a[0]>a[1] = 9>5 // a[1]>a[2]
//                temp = a[j];
//                a[j] = a[j+1];
//                a[j+1] = temp;
//                flag = 0;
//          }
//       }
//       if(flag==1){
//         break;
//       }
//   }

//   printf("Sorted Array:\n");
//   for(int i=0;i<5;i++){
//     printf("%d",a[i]);
//   }
// }
// {5,9,8,3,6}



// selection sort - min element find , position

// [3,2,1,9,8,4]
// min =3   
// [1,3,2,9,8,4]


#include<stdio.h>
int main(){
  int a[5] = {9,5,8,3,6}; // {3,5,6,8,9}
  int i,j ,temp,min;

  for(i=0;i<4;i++){ // i=0 0<4 
    min = i; // min = 0
    for(j=i+1;j<5;j++){// j=1  1<5  // j=2 2<5 // j=3 3<5 // j=4
      if(a[j] <a[min]){// a[1]<a[0] -> 5<9 -> min =1 || a[2]<a[1] -> 8<5 || a[3]<a[1] -> 3<5 || 6<3
        min = j;  // min =3
      }
    }
    temp = a[i];// temp = 9
    a[i] = a[min]; // a[0] = 3
    a[min] = temp;  // a[3] = 9;
  }
   printf("Sorted Array:\n");
  for(int i=0;i<5;i++){
    printf("%2d",a[i]);
  }
  return 0;

}

