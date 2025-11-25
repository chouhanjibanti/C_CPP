// * * * * *
// * * * * 
// * * * 
// * *
// *

// #include<stdio.h>
// void main(){
//     int star = 6;
//     for(int i=1;i<=5;i++){
//         star--;//5
//         for(int j=1;j<=star;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// 4. 
//         *
//       * *
//     * * *
//   * * * *
// * * * * *

// #include<stdio.h>
// void main(){
//     int star = 0;
//     int space = 5;
//     for(int i=1;i<=5;i++){
//         star++;//5
//         space--;
//         for(int j=1;j<=space;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=star;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// 5.    == -1 0 1 2 3 4 
// * * * * *
//   * * * *
//     * * *
//       * *
//         *


// #include<stdio.h>
// void main(){
//     int star = 6;
//     int space = -1;
//     for(int i=1;i<=5;i++){
//         star--;//5
//         space++;
//         for(int j=1;j<=space;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=star;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// 6. 
//       *
//      * *
//     * * *
//    * * * * 
//   * * * * *

// 7. 
//     * * * * *
//      * * * *
//       * * *
//        * *
//         *

// 8. 
//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *
//* * * * * * * * * * * 


// 9. 
// A
// B C 
// D E F 
// G H I J
// K L M N O






// 10.
// 1
// 2 3
// 4 5 6
// 7 8 9 10


// 11. 
// *
// * 0
// * 0 *
// * 0 * 0
// * 0 * 0 *

// #include<stdio.h>
// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//            if(j%2==0){
//             printf("0 ");
//            }else{
//             printf("* ");
//            }
//         }
//          printf("\n");
//     }
// }

// 12. 
// * * * * * 
// *       *
// *       *
// *       *
// * * * * *

// 13.  
//       *
//      * *
//     * * *
//    * * * * 
//   * * * * *
//    * * * *
//     * * *
//      * *
//       *


#include<stdio.h>
void main(){
    int star = 0;
    int space = 5;
    for(int i=1;i<=9;i++){
        if(i<=5){// 1<=5 // 2<=5
            star++; // 1 // 2
            space--;// 4 // 3
        }else{
            star--;
            space++;
        }
        for(int j=1;j<=space;j++){
          printf(" ");
        }
        for(int k=1;k<=star;k++){
            printf("* ");
        }
        printf("\n");
    }
}

   
