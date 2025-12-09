Dynamic Memory Allocation 

Types of memory Allocation

1. static memory Allocation  [SMA]
2. Dynamic Memory Allocation [DMA]

Static memory Allocation :- 
 -> In static memory allocation , the compiler knows at compile time hwo much memory allocated to each variable.
 -> THe size is fixed before program Execution.
 -> Example int a[10] // Memory fixed at compile time.

 Dynamic Memory Allocation :- 
 -> If merory is required during the execution (run time) , then we use Dynamic memory allocation.
 -> DMA functions are availabe in stdlib.h

 Functions of DMA :- 
 -> malloc()
 -> calloc()

-> malloc() Function 
-> Meaning :- memory Allocation
-> Use :- Allocates a single block of memory
-> Return type -> void 
-> syntax :- ptr = (int*) malloc(n * sizeof(int))

-> Features :- 
      -> memory is not initialized

<!-- ================================ -->


-> calloc Function 
Meaning :- Contiguous Allocation 
Use :- intializes then to zero
Synatx :- ptr = (int*) (n , sizeof(int))
Features :- All allocated memory block are initializes to 0.

