Array :- 

:- An array is a collection of similar datatypes.
:- It is collection of homogenous data.
                                           1022 1024 1026 1028 1030
   Homo :- same type of elements :-    arr = [1,2,3,4,5,];
   Hetero :- diff types of elements  :- arr= [1,"hy",true, false]

:- Array is a continues memory allocation.
:- Array stores data in the index format.

Example :- 
int a[5];
int arr = [10,20,30,40,50]

Index         value          Address
0               10             1022
1               20             1024
2               30             1026
3               40             1028
4               50             1030

 :- Array indexing :- 
  -> Index always starts from 0.

Formula for Address :- 
Address of a[i] = Base Addres +(i*size of data type)
a[0]   = 1022+(0*2) = 1022
a[1]   = 1022+(1*2) = 1024

========================================================

Memory taken by an Array  :- 

Memory of Array = [no. of elements * size of data type ] bytes
Memory of Array = [5*2] Bytes
Memory of Array = 10 

========================================

## Array can defined Statically and dynamically

#### Static Allocation

When the elements of the array are declared at compiler time.called a static memory Allocation.
Example :- int a[] = {1,2,3,4,5}

#### Dynamic Allocation 
In dynamic allocation , array elements are given at run time by the user.
Example :- int a[5];

=============================================

Types of Array :- 
1. 1-D Array (one Dimensional Array)
Example :- int a[5];

2. 2-D Array [Multi Dimensional Array]
Example :- int a[3][3] // rows and columns 

========================================

## programs :- 

static array Example - 
1-D Array :- 



| Feature                     | **Linear Search**                          | **Binary Search**                             |
| --------------------------- | ------------------------------------------ | --------------------------------------------- |
| **Definition**              | Searches each element one-by-one           | Repeatedly divides the search space into half |
| **Works On**                | ✔ Unsorted array  <br> ✔ Sorted array      | Unsorted array <br> ✔ Only sorted array     |
| **Approach**                | Sequential checking                        | Divide and conquer                            |
| **Time Complexity (Worst)** | **O(n)**                                   | **O(log n)**                                  |
| **Space Complexity**        | O(1)                                       | O(1)                                          |
| **Speed**                   | Slow for large data                        | Very fast                                     |
| **Process**                 | Compare target with every element          | Find mid → compare → reduce search range      |
| **Best Use Case**           | Small arrays / unsorted data               | Large sorted arrays                           |
| **Example**                 | Checking roll number in an attendance list | Searching a word in a dictionary              |



