It is a way to allocate memory to a data structure during the runtime.

a.malloc()-->takes a number of bytes to be allocated & returns a pointer of type void
ptr=(int *) malloc(5*sizeof(int));

b.calloc-->inizializes with 0
ptr=(int *) calloc(5,sizeof(int));

c.free()-->we use it to free memory that is allocated using a mallloc &calloc
free(ptr)

d.realloc()--> realocate (increase or decrease) memory using the same pointer & size.
ptr=realloc(ptr,newSize);


# Memory segment
Memory allocated during compile time is used static memory.
the memory allocated is fixed and cannot be increased or decreaded during run time.

heap is segment of memory where dynamic memory allocation takes place

unlike stack where memory is allocated or deallocated in a defined order


block started by symbol,

statck -->stack frame

# Stack memory allocation
* Memory alloacted during compile time is called static memory
* The memory allocated is fixed and cannot be increased or decreased during run time.
```c
int main()
{
    int a[5]={1,2,3,4,5};
}
```
# Problem faced in static memory allocation
* if you are allocating memory for an array during compile time then you have to fix the size at the time of declaration.size is fixed and user cannot increase or decrease the size of the array at runtime.
* if the values stored by the user in the array at run time is less than the size specified then there will be wastage of memory.
* if the values stored by the user in the array at run time is more than the size specified then the program may crash or misbehave.

# Dynamic Memory Allocation:
The process of allocating memory at the time of execution is called dynamic memory allocation.




```
|---------------------|
|       Stack         | <- Grows downwards
|---------------------|
|        ...          |
|   Local (auto) and  |
|  register variables |
|---------------------|
|       Heap          | <- Grows upwards
|---------------------|
| Uninitialized Data  | <- BSS segment
|   (bss segment)     |
|---------------------|
| Initialized Data    | <- Data segment
|   (data segment)    |
|---------------------|
|       Code          |
|   (text segment)    |
|---------------------|
```
# heap
Heap is the segment of memory where dynamic memory allocation takes place.

Unlike stack where the memory is allocated or deallocated in a defined order,heap is an area of memory where memory is allocated or deallocated without any order or randomly.

There are certain built in function that can help in allocating or deallocating some memory space at run time. 

* Pointer plan an important role in dynamic memory allocation.
* allocated memory can only be accessed through pointers

The process f allocating memory at the run time of execution is called dynamic memory allocation.

# Built in Function:
* malloc()
* calloc()
* realloc()
* free()


# Malloc
* malloc is a built in function declared in the header file<stdlib.h>
* malloc is the short name for "memory allocation" and it is used dynamically allocate a single large block of contiguous memory according to the size specified.

syntax:
  (void*)malloc(size_t size)

  malloc function simply allocates a memory block according to the size specified in the heap and on success it return a pointer pointing to the first byte of the allocated memory else return NULL.

  size_t is defined in <stdlib.h> as unsigned int.


  # Why void Pointer?
  * malloc doesn't have idea of what it is pointing to.
  * It merely allocates memory requested by the user without knowing the type of data to be stored inside the memory.

  `The Void pointer can be typecated to an appropriate type`.

  int *ptr=(int *)malloc(4)

  malloc allocates 4 bytes of memory in the heap and the adress of the first byte is stored in the poijter ptr.


  # calloc
  calloc() function is used to dynamically allocate multiple block of memory.
  calloc() stands for clear allocation.

  # it is different from malloc in two ways
  * calloc() needs two arguments instead of just one.
   syntax:
   (void*) calloc(size_t n,size_t size);

   - n-no of blocks
   - size-size of each block

     int *ptr=(int *)calloc(10,sizeof(int))

     int *ptr=(int *)malloc(10*sizeof(int))

  * Memory allocated by `calloc` is initialized to `zero`.
    It is not the case with malloc. Memory allocated by `malloc` is initialized with `some garbage value`

    malloc and calloc both return NULL when sufficient memory is not available in the heap.

  # realloc:
   realloc function is used to change the size of the memory block without losing the old data.

   syntax :
   void * realloc(void *ptr,size_t newsize);

   *ptr- pointer to the previous allocated memory

   Onfailure ,realloc return NULL.



   int *ptr=(int *)malloc(sizeof(int));
   ptr=(int*)realloc(ptr,2*sizeof(int));

   this will allocate memory space of 2*sizeof(int)
   also,this function moves the contents of the old block to a new block and the data of the block is not lost.
   we may lose the data when the new size is smaller than the old size.

   # free()
   * free function is used to release the dynamically allocated memory in heap.
   syntax:
        void free(ptr)
    
    The memory allocated in the heap will not be realsed automatically after using the memory. the space remains there and can't be used.
     It is the programmer responsibility to release the memory after use.

     ```c
       int main()
       {
          int *ptr=(int*)malloc(4*sizeof(int));
          ...
          free(ptr);
       }
     ```








