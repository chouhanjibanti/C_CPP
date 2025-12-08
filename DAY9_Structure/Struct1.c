// #include<stdio.h>

// struct student
// {
//     char name[20];
//     int age;
//     int rollno;
// };

// void main(){
//     struct student s;

//     printf("Enter name ,age  and rollno :");
//     scanf("%s%d%d", s.name , &s.age , &s.rollno);

//     printf("Name = %s, Age=%d ,rollno = %d\n",s.name, s.age,s.rollno);
// }

// ======================================================

// Array of Structure :- 

// when you want to store details of multiple students

// create an array of structure  :-
// struct student s[3]; // 3 student 

// #include<stdio.h>

// struct student
// {
//     char name[20];
//     int age;
// };
// void main(){
//     struct student s[3];
    
//    // input
//     for(int i=0;i<3;i++){
//         printf("Enter the name and age :");
//         scanf("%s%d",s[i].name , &s[i].age);
//     }

//     // ouput 
//     for(int i=0;i<3;i++){
//         printf("Name is :%s,Age: %d\n",s[i].name , s[i].age);
//     }
// }


// #include<stdio.h>

// struct Book
// {
//     char name[20];
//     int price;
// };
// void main(){
//     struct Book b[3];
    
//    // input
//     for(int i=0;i<3;i++){
//         printf("Enter the name and price of book :");
//         scanf("%s%d",b[i].name , &b[i].price);
//     }

//     // ouput 
//     for(int i=0;i<3;i++){
//         printf("Name is :%s,Price: %d\n",b[i].name , b[i].price);
//     }
// }

// WAP to create the Employee Struct. -> where field -> name , post , salary
