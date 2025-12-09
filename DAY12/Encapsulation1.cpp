// #include<iostream>
// using namespace std;

// class Student{
// private:
//     int marks; // data hidden
// public:
//      void setMarks(int m){
//        marks = m;
//      }
//      void showMarks(){
//         cout << "Marks = " << marks;
//      }
// };

// int main(){
//     Student s;
//     s.setMarks(90);
//     s.showMarks();
//     return 0;
// }


// ==============================================

// datamember :- balance -> double 
// deposit :- 
// withdraw :- 


#include<iostream>
using namespace std;

class BankAccount{
private:
    double balance; // data hidden
public:
 // setter function
     void deposit(double amount){
        if(amount>0){
            balance += amount; // 1000
        }
     }

      // setter function
     void withdraw(double amount){ // 5000
        if(amount >0 && amount <= balance){
            balance -= amount;
        }else{
            cout << "invalid withrawal" << endl;
        }
     }

     // getter function 
     void showBalance(){
        cout << "Current Balance =" << balance << endl;
     }
};

int main(){
    BankAccount  b;
    b.deposit(1000);
    b.withdraw(50);
    b.showBalance();
    return 0;
}


