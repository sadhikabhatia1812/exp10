AIM:- to understabd different parameter passing methods in c++, especially call by value, call by pointer and call by reference.
THEORY:-
In C++, there are several ways to pass arguments to functions:
Call by Value:
The actual values of arguments are copied into the formal parameters of the function.
Changes made to parameters inside the function do not affect the original arguments.
Used when the function should not modify the input data.
Call by Pointer (Simulating Call by Reference using PoiNters):
Instead of passing the value, the address (pointer) of the variable is passed.
The function works directly on the memory location of the variables.
Changes inside the function reflect in the original variables.
Call by Reference:
A reference (alias) to the original variable is passed directly.
The function parameters act as another name for the original arguments.
Changes in the function modify the original variables.
Syntax: void func(int &x, int &y)

ALGORITHM:-
Call by Value:
Copy the values of actual arguments into function parameters.
Perform the swap on copies.
Return to the main function.
Observe no change in original variables.

Call by Pointer:
Pass addresses of variables to function.
Inside the function, dereference pointers to access and modify actual variables.
Swap values at the memory locations.
Return to main function.
Observe original variables are swapped.

Call by Reference:
Pass variables by reference (no copying, no pointers).
Function parameters become aliases for original variables.
Swap the variables directly.
Return to main function.
Observe original variables swapped.

CONCLUSION:-
Call by value passes copies, so changes inside the function don’t affect the original variables. Call by pointer and call by reference both allow the function to modify the original variables, but call by reference is simpler and safer to use. Understanding these methods helps write efficient and clear code when variable modification is needed.
