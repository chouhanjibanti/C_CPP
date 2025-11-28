// // WAP to print 10 to 1 using recursion.

// #include<stdio.h>
// void show(int no);
// void main(){
//     int no;
//     printf("Enter any number ");
//     scanf("%d",&no);

//     show(no);//10
// }
// void show(int no){
//     if(no>=1){// 10>=1 // 9>=1 //8>=1
//         printf("%d\n",no); // 10 //9 //8
//         show(no-1);// show(9) // show(8)// show(7)
//     }
// }


// Factorial using the recursion
// #include<stdio.h>
// void fact(int no);
// void main(){
//     int no;
//     printf("Enter any  number: ");
//     scanf("%d",&no);

//     fact(no);
// }
// void fact(int no){ // 5 // 4//3//2//1 //0
//       static int f=1;
//     if(no>=1){
//         f = f*no;
//         fact(no-1);
//     }else{
//         printf("%d",f);
//     }
// }

// sum of 10 number  -> 10+9+8+7+6+5+4+3+2+1= 55

#include<stdio.h>
int sum(int no);
int main(){
    int no;
    printf("Enter any  number: ");
    scanf("%d",&no);

    printf("Sum of the no =%d",sum(no));
    return 0;
}
int sum(int no){
    if(no==1){
        return 1;
    }else{
        return no+sum(no-1);
    }
}

