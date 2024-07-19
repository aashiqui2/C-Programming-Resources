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