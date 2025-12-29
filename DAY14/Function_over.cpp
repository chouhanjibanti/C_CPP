#include<iostream>
using namespace std;

class A{
    float a , r, pi;

public: 
      void area(int l, int b){
            a = l*b;
            cout << "Area Of Rectange << " << a << endl;
      }

      void area(int s){
        a = s*s;
        cout << "Area of Sqaure <<"  << a << endl;
      }

      void area(float r){
        pi = 3.14;
        a = pi*r*r;
        cout << "Area of Circle << " << a << endl;
      }
};

int main(){
    A obj;
    obj.area(5,10);
    obj.area(4);
    obj.area(5.1f);

    return 0;
}