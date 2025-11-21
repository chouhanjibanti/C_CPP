// While loop :- 
// 1. WAP to reverse the number. where number is 5678. -> 8765
// 2. Check the number it is palidrome or not. ->  121 - 121
// 2. Check number it is armStrong or not.

// #include<stdio.h>
// void main(){
//     int num = 5678;
//     int rev = 0;
//     while(num>0)// 567>0 // 56>0 // 5>0 // 0>0
//     {
//          int digit = num%10;// 8 // 7 //6 // 5
//          rev = (rev*10)+digit;// rev = 0+8= 8 // 80+7 = 87 // 876// 8760+5 = 8765
//         num = num/10; // 5678/10 = 567 // 567/10 = 56 // 56/10 => 5 \\ 5/10 => 0
//     }
//     printf("%d",rev);
// }
// 5678%10 -> 8
// rev = 0+8 = 8
// 5678/10 -> 567

// 567%10  -> 7
// rev = 80+7 = 87
// 567/10 -> 56

 // 6
 // 870+6 = 876
 // 56/10 = 5

 // 5
 // 8760+5 = 8765
 // 5/10 = 0


// 2. Check the number it is palidrome or not. ->  121 - 121
//  #include<stdio.h>
// void main(){
//     int num = 121;
//     int rev = 0;
//     int num1 = num;
//     while(num>0)
//     {
//          int digit = num%10;
//          rev = (rev*10)+digit;
//         num = num/10; 
//     }
//     if(rev==num1){
//         printf("number is palindrome = %d",rev);
//     }
//     else{
//       printf("number is not palindrome = %d",rev);
//     }
// }

// 3. Check number it is armStrong or not. where number is 143
// 1*1*1+4*4*4+3*3*3 = 1+64+27 = 92

// #include<stdio.h>
// void main(){
//     int num = 153;
//     int num1 = num;
//     int sum =0;
//     while (num>0) // 145>// 14>0 // 1>0 // 0>0
//     {
//         int digit = num%10; // 145%10 -> 5 // 14%10 -> 4 // 1%10 => 1
//         sum = sum + digit*digit*digit; // sum = 125 // sum = 125+64 = 189 // sum = 189+1 = 190
//        num = num/10;// 145/10 ->14/10 -> 1/10 = 0
//     }
//     if(num1==sum){
//          printf("number is armstrong = %d",num1);
//     }else{
//          printf("number is not srmstrong = %d",num1);

//     }
// }

// 4. check number is armstrong or not. when i am taking the input from the user.
//5.  WAP to check number is strong number or not. where number is 145.
// 145 -> 1!+4!+5! = 1+24+120= 145 

// #include<stdio.h>
// int factorial(int n){
//      int fact =1;
//      for(int i=1;i<=n;i++){
//          fact = fact*i;// 120
//      }   
//      return fact;
// }

// int isStrong(int num){
//     int sum =0, num1 = num;
//     while (num1>0)
//     {
//         int digit = num1%10;
//         sum = sum + factorial(digit);
//         num1 = num1/10;
//     }
//     if(sum==num){
//      return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int num;
//     printf("Enter any number ");
//     scanf("%d",&num);

//     if(isStrong(num))
//     {
//         printf("number is string number = %d",num);
//     }else{
//         printf("number is not strong number = %d",num);
//     }
//     return 0;
// }

// 6. neon number 
// 9 -> 9*9 = 81 = 9








