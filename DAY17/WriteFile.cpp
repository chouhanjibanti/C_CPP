// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     // create the object of the ofStream
//     ofstream f1;
//     f1.open("log.txt");

//     f1 << "Name : Tanisha\n";
//     f1 << "Age : 21\n";
//     f1 << "Address : Indore\n";

//     f1.close();
//     cout << "data Written Successfully inside file";
// }


// ========================================

// Read Data from the file  ifStream

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     // create the object of the ofStream
//     ifstream f1;
//     f1.open("log.txt");

//     string l;
//     while(getline(f1,l)){
//         cout << l << endl;
//     }
//     // getline(f1,l);
//     // cout << l << endl;
//     f1.close();

// }

// =============================================

// Append file 
// File is exist  or not.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream s;
    s.open("log.txt");

    if(!s){
        cout << "File not found in this";
    }else{
        cout << "File Exist";
    }

    s.close();
}

