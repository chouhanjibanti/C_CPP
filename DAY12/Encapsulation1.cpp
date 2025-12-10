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


// #include<iostream>
// using namespace std;

// class BankAccount{
// private:
//     double balance; // data hidden
// public:
//  // setter function
//      void deposit(double amount){
//         if(amount>0){
//             balance += amount; // 1000
//         }
//      }

//       // setter function
//      void withdraw(double amount){ // 5000
//         if(amount >0 && amount <= balance){
//             balance -= amount;
//         }else{
//             cout << "invalid withrawal" << endl;
//         }
//      }

//      // getter function 
//      void showBalance(){
//         cout << "Current Balance =" << balance << endl;
//      }
// };

// int main(){
//     BankAccount  b;
//     b.deposit(1000);
//     b.withdraw(50);
//     b.showBalance();
//     return 0;
// }


// Ques :-5: Create a class Laptop which hides price and modelNumber.

// Write methods to:
// -> setData(price, modelNumber)
// -> displayData()

// Price should never be negative → validate in setter.


#include<iostream>
using namespace std;

class Laptop{
private:
  float price;
  int modelNumber;

public:
   void setData(float p1,int m1){// p1 = -10 // p1 = 100
     if(p1<0){// -10 <0
        cout << "Error: price is negative \n";
        price =0;
     }
     else{
        price = p1; // price = 100
     }
     modelNumber = m1;
   }

   // for displaying the data
void displayData(){
    cout << "Laptop price : "<< price;
     cout << "Laptop ModelNumber : "<< modelNumber;
}
};
int main(){
    Laptop l;
    l.setData(-100,20001);
    l.displayData();

    return 0;
}





