// // Always create the object of the child class.
// #include<iostream>
// using namespace std;

// class A{
// public:
//      void sleep(){
//         cout <<" i am sleeping \n"; 
//      }
// };

// class B : public A{
// public:
//    void play(){
//     cout << "I am playing cricket \n";
//    } 
// };

// int main(){
//    B obj;
//    obj.sleep();
//    obj.play();

//    return 0;
// }


// ===========================================

// Multilevel inheritance :- 

// #include<iostream>
// using namespace std;
// class A{
// public:
//   void car(){
//     cout << "i am car for the driving \n";
//   }
// };

// class B : public A{
// public:
//    void bike(){
//      cout << "i am bike for riding \n";
//    }
// };

// class C :public B {
//  public :
//  void bus(){
//     cout << "i am bus \n";
//  }
// };

// int main(){
//     C obj;
//     obj.car();
//     obj.bike();
//     obj.bus();
// }


// ==========================================

// multiple inheritance 

#include<iostream>
using namespace std;

class A{
    public:
    void showA(){
       cout << "From the class A\n";
    }
};
class B{
    public:
    void showB(){
        cout << "From the class B\n";
    }
};
class C: public A ,public B{
    public:
    void showC(){
        cout << "From the class C\n";
    }
};
int main(){
    C obj1;
    obj1.showA();
    obj1.showB();
    obj1.showC();
}