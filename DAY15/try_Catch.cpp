// // Example of Exception handling

// #include<iostream>
// using namespace std;

// int main(){
//   try
//   {
//     int x ,y;
//     cout << "Enter x and y : ";
//     cin >> x >> y;

//     if(y==0){
//         throw "you can not divide by 0";
//     }

//     cout <<  "Result = " << x/y;
//   }
//   catch(const char* msg)
//   {
//      cout << "Error " << msg;
//   }
  
// }



// #include<iostream>
// using namespace std;

// int main(){
//   try{
//     int choice;
//     cout << "Enter 1 or 2";
//     cin >> choice;

//     if(choice ==1){
//       throw 10;
//     }else {
//       throw string("String exception");
//     }
//   }catch(int x){
//     cout << "Integer Execption :" << x;
//   }catch(string s){
//     cout << "String Exception :" << s;
//   }
// }

// Array index oyt of bounds 

#include<iostream>
using namespace std;

int main(){
  int arr[5] = {1,2,3,4,5};
  int index;

  cout << "Enter index :";
  cin >> index;

  try{
    if(index < 0 || index>=5){
      throw "Array index out of bounds ";
    }else{
      cout << "value of this index : " << arr[index] ;
    }
  }catch(const char* msg){
    cout << msg;
  }
}

 //5. Password Validation , password must be less then 8 .
