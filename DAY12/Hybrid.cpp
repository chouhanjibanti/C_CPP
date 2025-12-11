#include<iostream>
using namespace std;
class A{
public: 
    void showA(){
        cout << "This is parent class A\n";
    }
};
class B:public A{
public:
    void showB(){
        cout << "This is child class B\n";
    }
};
class C:public A{
public:
    void showC(){
        cout << "This is child class C\n";
    }
};
class D:public B , public C{
    public:
    void showC(){
        cout << "This is child class D\n";
    }
};

int main(){
    D obj1;
    obj1.showB();
    obj1.showC();
    // obj1.showA();
}