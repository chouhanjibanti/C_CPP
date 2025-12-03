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

// 32
//
// 


 #include<stdio.h>
void main(){
   int a[3][3] , b[3][3], c[3][3];

   printf("Enter the Element of Matrix A(3*3):\n");
   for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
       scanf("%d",&a[i][j]); // i=0 j=0 // i=0 j=1
     }
   }

      printf("Enter the Element of Matrix B(3*3):\n");
   for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
       scanf("%d",&b[i][j]); // i=0 j=0 // i=0 j=1
     }
   }

   // Matrix multiplication logic 
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        int sum =0;
        for(int k=0;k<3;k++){
            sum = sum + a[i][k]*b[k][j]; // 21
            // sum = sum + a[0][0] * b[0][0] // sum = 0+4
            // sum = 4 + a[0][1]*b[1][1]
            // sum = 20 + a[0][2]*b[2][2]
        }
        c[i][j] = sum;
    }
   }

   printf("Result matrix : \n");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t", c[i][j]);
    }
    printf("\n");
   }

}