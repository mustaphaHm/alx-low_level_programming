0-print_name.c :
function that prints a name

1-array_iterator.c :
 a function that executes a function given as a parameter on each element of an array.

2-int_index.c :
a function that searches for an integer

3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h :
a program that performs simple operations.

You are allowed to use the standard library
Usage: calc num1 operator num2
You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
operator is one of the following:
+: addition
-: subtraction
*: multiplication
/: division
%: modulo
The program prints the result of the operation, followed by a new line
You can assume that the result of all operations can be stored in an int
if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
