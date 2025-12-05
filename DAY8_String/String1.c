// strlen 
// #include<stdio.h>
// #include<string.h>

// int main(){
//     char name[20] = "Debugshala"; // {'D','e','\0'}
//     int length = strlen(name);

//     printf("Length =%d",length);
//     return 0;
// }

// strrev :- by using this methods we can reverse the String.
// #include<stdio.h>
// #include<string.h>

// int main(){
//         char name[20] = "Debugshala"; // {'D','e','\0'}

//         printf("Reverse = %s", strrev(name) );
//         return 0;
// }

// strupr() :-  By using this method we can convert into the upper case letter.
// #include<stdio.h>
// #include<string.h>

// int main(){
//         char name[20] = "Debugshala"; // {'D','e','\0'}

//         printf("Reverse = %s\n", strupr(name) );
//         printf("Reverse = %s", strlwr(name) );

//         return 0;
// }
// =================================

// strcat() :- we can concatinate the strings.

// #include<stdio.h>
// #include<string.h>

// int main(){
//         char name[20] = "Debugshala "; // {'D','e','\0'}
//         char name1[20] = "indore";

//         strcat(name,name1);
//         printf("Reverse = %s", name);
//         return 0;
// }

// ===============================

// strcmp() :- compare two Strings.

// both Strings are equal -> '0'
// first String are greater -> positive
// second String are greater -> negative

// #include<stdio.h>
// #include<string.h>

// int main(){
//         char name[20] = "Debugshala"; // {'D','e','\0'}
//         char name1[20] = "Debugshala1";

//          int result = strcmp(name,name1);
//          printf("Result = %d",result);
//        if(result ==0 ){
//          printf("Strings are equal");
//        }else{
//          printf("Strings are not equal");
//        }
//         return 0;
// }


// ===================================

// strcpy() :- copy one String to another.
// #include<stdio.h>
// #include<string.h>
// int main(){
//             char name[20] = "Debugshala"; 
//             char ans[20];

//             strcpy(ans ,name);
//             printf("copies String =%s",ans);
//             return 0;
// }

// ===========================================================

// Example :- strchr , strstr, strset , strcmpi

// #include<stdio.h>
// #include<string.h>

// void main(){
//     char name[10];
 

//     // printf("String strchr = %s\n", strchr("rhhahul",'h'));
//     // printf("String strstr = %s\n", strstr("rakuhulkumar","ku"));
//     // printf("String strset = %s\n", strset("amit",'p'));// pppp
//     printf("String strchr = %d\n", strcmpi("yogesh","yogesH"));
// }


// =======================================

// find the length of the String  (without methods)

#include<stdio.h>

void main(){
    char name[10];
    int i =0;

    printf("Enter name "); // debugshala'\0'
    gets(name);// for taking the input from the user.

    while (name[i] != '\0')
    {
       i++;
    }
    printf("String length = %d",i);
}









