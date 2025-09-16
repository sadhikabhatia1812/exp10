AIM:-
To study and implement different parameter passing techniques in C++—call by value, call by reference using pointers, and call by reference using reference variables—and observe their effects on variable values.

THEORY:-
Pointers in C++
A pointer is a variable that stores the address of another variable. Using pointers, we can directly access and modify the memory location of the referenced variable.

Call by Value
In call by value, copies of actual parameters are passed to the function.
Changes made inside the function do not affect the original variables.
Example:
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
Here, x and y are copies of the original arguments.

Call by Reference using Pointers
The function receives addresses of variables (pointers).
By dereferencing the pointers, the actual values in memory are changed.
Example:
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

Here, any modification affects the original variables.

Call by Reference using Reference Variables
Uses reference variables (&) that act as aliases to the original variables.
No explicit pointers are required, and changes directly affect the original values.
Example:
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

ALGORITHM:-
For Call by Value
Start the program and declare two integer variables.
Define a function swap(int x, int y) that swaps values of x and y.
Pass the values of two variables to swap().
Print the variables in main().
Observe that the original variables remain unchanged.

For Call by Reference using Pointers
Declare two integer variables.
Define swap(int *x, int *y) to swap values using dereferenced pointers.
Pass the addresses of variables to the swap() function.
Print the variables in main().
Observe that the original values are swapped.

For Call by Reference using Reference Variables
Declare two integer variables.
Define swap(int &x, int &y) using references to swap values.
Pass variables directly to the swap() function.
Print the variables in main().
Observe that the original values are swapped.

CONCLUSION:-
In call by value, the original variables remain unchanged since copies are passed.
In call by reference (pointers) and call by reference (reference variables), changes inside the function directly affect the original variables.
Pointers give low-level control over memory, while reference variables offer a safer and more readable way to achieve call by reference.
Understanding these techniques is essential for efficient memory management and data manipulation in C++.

