# Function
we can divide a large program into the basic building blocks known as function. The function contains the set of programming statements enclosed by {}. A function can be called multiple times to provide reusability and modularity to the C program. 


# Advantage in function
* By using functions, we can avoid rewriting same logic/code again and again in a program.
* We can call C functions any number of times in a program and from any place in a program.
* We can track a large C program easily when it is divided into multiple functions.
* Reusability is the main achievement of C functions.
* However, Function calling is always a overhead in a C program.


# Call by value
* In call by value method, the value of the actual parameters is copied into the formal parameters. In other words, we can say that the value of the variable is used in the function call in the call by value method.

* In call by value method, we can not modify the value of the actual parameter by the formal parameter.

* In call by value, different memory is allocated for actual and formal parameters since the value of the actual parameter is copied into the formal parameter.

* The actual parameter is the argument which is used in the function call whereas formal parameter is the argument which is used in the function definition.

# Call by Reference
* In call by reference, the address of the variable is passed into the function call as the actual parameter.

* The value of the actual parameters can be modified by changing the formal parameters since the address of the actual parameters is passed.

* In call by reference, the memory allocation is similar for both formal parameters and actual parameters. All the operations in the function are performed on the value stored at the address of the actual parameters, and the modified value gets stored at the same address.