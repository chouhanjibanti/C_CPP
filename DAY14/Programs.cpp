// #include<iostream>
// using namespace std;

// class Simple{
//     public: 
//         int P, R, T ,SI;

//         void set(){
//             cout << "Enter the value of P, R , T : ";
//             cin >> P >> R >> T ;
//         }

//         void mul(){
//             SI = (P*R*T)/100;
//         }

//         void show(){
//             cout << "SI << " << SI;
//         }
// };
// int main(){
//     Simple obj;
//     obj.set();
//     obj.mul();
//     obj.show();
// }


#include<iostream>
using namespace std;

class Simple{
    public: 
        int bs, gs, ta ,da,SI;

        void set(){
            cout << "Enter the value of bs: ";
            cin >> bs ;
        }

        void calc(){
            ta = (bs*10)/100;
            da = (bs*10)/100;
            gs = bs + ta + da; 
        }

        void show(){
            cout << "GS << " << gs;
        }
};
int main(){
    Simple obj;
    obj.set();
    obj.calc();
    obj.show();
}