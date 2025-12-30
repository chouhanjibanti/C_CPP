// Defualt Constructor

// class X{
//     int a, b;
//     public:
//     X(){
//         a = 1;
//         b =1;
//     }
// };

// Example Default Constructor

// #include<iostream>
// using namespace std;

// class cons{
//      int a, b;
//     public:
//       cons(){
//          a=1;
//          b=1;
//       }

//       void set(){
//         cout << "Enter the value of a,b";
//         cin >> a>> b;
//       }

//       void add(){
//         cout << "Sum = " << a+b  << endl;
//       }
// };
// int main(){
//     cons obj;
//     obj.add();// 2
//     obj.set();
//     obj.add();// 10+30 = 40
// }


// #include<iostream>
// using namespace std;

// class cons{
//      int a, b;
//     public:
//       cons(int a1 ,int b1){
//          a=a1;
//          b=b1;
//       }

//       void set(){
//         cout << "Enter the value of a,b";
//         cin >> a>> b;
//       }

//       void add(){
//         cout << "Sum = " << a+b  << endl;
//       }
// };
// int main(){
//     cons b1 = cons(10,20);
//     // b1.set();
//     b1.add();// 30
//     b1.set();
//     b1.add();// 100+200 = 300
// }

// Example of the copy constructor 

#include<iostream>
using namespace std;

class A{
   int x;
   public:
   A(int y){
     x = y;
   }

    A(A &ob){
      x  = ob.x;
    }

    void show(){
      cout << "Value of x = " << x << endl;
    }
}; 

int main(){
  A ob(10);
  ob.show();

  A obj(ob);
  obj.show();
}