// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int n ;// n -> number of elements
//     int *ptr;

//     printf("Enter the number of elements :");
//     scanf("%d",&n);

//     ptr = (int*) malloc(n*sizeof(int));

//     printf("Enter the element :\n");
//     for(int i=0;i<n;i++){
//         scanf("%d", &ptr[i]);
//     }

//      printf("Enter the element :\n");
//     for(int i=0;i<n;i++){
//         printf("%d ", ptr[i]);
//     }

//     return 0;
// }




#include<stdio.h>
#include<stdlib.h>

int main(){
    int n ;// n -> number of elements
    int *ptr;

    printf("Enter the number of elements :");
    scanf("%d",&n);

    ptr = (int*) calloc(n,sizeof(int));

     printf("After calloc memory (initial values) :\n");
    for(int i=0;i<n;i++){
        printf("%d ", ptr[i]);
    }

    printf("Enter the element :\n");
    for(int i=0;i<n;i++){
        scanf("%d", &ptr[i]);
    }

     printf("Enter the element :\n");
    for(int i=0;i<n;i++){
        printf("%d ", ptr[i]);
    }

    return 0;
}