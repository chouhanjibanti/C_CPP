// read and display name and age using the union

// #include<stdio.h>

// union std
// {
//     char name[20];
//     int age;
// };

// int main(){
//     union std u;

//     printf("Enter the name: ");
//     scanf("%s",u.name);
//     printf("Name :%s\n",u.name);

//     printf("Enter the Age: ");
//     scanf("%d", &u.age);
//     printf("Name :%d\n",u.age);
//    printf("Name :%s\n",u.name);

//    return 0;
// }


// ==============================

// union with pointer :- 


#include<stdio.h>
union std
{
    char name[20];
    int age;
};

int main(){
    union std u ,  *p;
    p = &u;

    printf("Enter the name :");
    scanf("%s", p->name);
    printf("Name :%s\n",p->name);
    printf("Name :%p\n",p->name);

    
    printf("Enter the Age :");
    scanf("%d", &p->age);
    printf("Age :%d\n", p->age);     
     printf("Age :%p\n", &p->age);
    printf("Name :%s\n",p->name);
  return 0;
}

