// #include<iostream>
// using namespace std;

// class A{
//     int a,b; // private data members

//     public:
//     A(){
//         a =20;
//         b =30;
//     }

//     // friend function declaration
//     friend void max(A ob);
// };

// // friend function definition
// void max(A ob){
//    if(ob.a > ob.b ){
//      cout << "Max = " << ob.a ;
//    }else{
//         cout << "Max = " << ob.b ;
//    }
// }
// int main(){
//     A ob;
//     max(ob); // normal function call
//     return 0;
// }

// ================================================
// Two classes Example  :- 


#include<iostream>
using namespace std;

class B;
class A{
    int a;
    public:
    A(){
        a= 10;
    }
    friend void max(A ob,B ob1);
};

class B{
    int b;
    public:
    B(){
     b = 20;
    }
    friend void max(A ob,B ob1);
};

// friend function definition
void max(A ob, B ob1){
   if(ob.a > ob1.b ){
     cout << "a is greater" ;
   }else{
        cout << "b is greater";
   }
}
int main(){
    A ob;
    B ob1;
    max(ob,ob1);
    return 0;
}