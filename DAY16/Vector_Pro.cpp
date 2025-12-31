// // ST - vector 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     vector<int> v1;

//     v1.push_back(110);
//     v1.push_back(15);
//     v1.push_back(20);
    

//     // display the elememt
//     cout << "vector Elements : ";
//     for(int x1:v1){
//         cout << x1 << " ";
//     }

//     sort(v1.begin() , v1.end());

//     cout << "Sorting : ";
//     for(int x2:v1){
//         cout << x2 << " ";
//     }
// }


// ==========================================

// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list<int> l;

//     l.push_back(30);
//     l.push_front(10);
//     l.push_back(20);

//     cout << "List of element : ";
//     for(int x :l)
//     cout << x << " ";

//     // remove value 
//     l.remove(20);

//      cout << "List of element After deleting : ";
//     for(int x :l)
//     cout << x << " ";

// }



// =========================================

// set 
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

   s.insert(30);
     s.insert(90);
      s.insert(30);
       s.insert(10);

    cout << "Set of element : ";
    for(int x :s)
    cout << x << " ";


}
