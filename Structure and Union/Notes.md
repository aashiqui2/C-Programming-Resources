# union
The Union is a user-defined data type in C language that can contain elements of the different data types just like structure. But unlike structures, all the members in the C union are stored in the same memory location. Due to this, only one member can store data at the given instance.


* Initialization and Overwriting: Each initialization overwrites the previous data because all members share the same memory location.
* Output: Outputs are provided to show how data changes and which values are meaningful after each assignment.
* Meaningful Access: Accessing other members after setting one member demonstrates the overlapping nature of union members.