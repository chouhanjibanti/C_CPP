// Example of Exception handling

#include<iostream>
using namespace std;

int main(){
  try
  {
    int x ,y;
    cout << "Enter x and y : ";
    cin >> x >> y;

    if(y==0){
        throw "you can not divide by 0";
    }

    cout <<  "Result = " << x/y;
  }
  catch(const char* msg)
  {
     cout << "Error " << msg;
  }
  
}