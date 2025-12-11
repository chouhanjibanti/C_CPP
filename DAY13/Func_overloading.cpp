// Function overloading(compile time polyphism)
// #include<iostream>
// using namespace std;

// class Math{
//     public:
//     int add(int a , int b){
//         //  return a+b;
//         cout << a+b << endl;
//     }
//     float add(float a, float b){
//         // return a+b;
//         cout << a+b << endl;
//     }
// };
// int main(){
//     Math m;
// //    cout <<  m.add(10,20) << endl;
// //     cout << m.add(10.0f,20.0f) << endl;

// m.add(10,20);
// m.add(10.0f,30.0f);
// }

// =====================================

// Run time polymorphism(overriding)

#include<iostream>
using namespace std;

class A{
    public:
    virtual void show(){
      cout << "Class A\n";
    }
};
class B: public A{
public:
    void show() override{
      cout << "Class B\n";
    }
};
int main(){
    A* ptr;
    B obj1;

    ptr = &obj1;
    ptr->show();

}

// int a = 5;
// int *ptr;

// ptr = &a;

// int *ptr;