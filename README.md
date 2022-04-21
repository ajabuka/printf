_printf()

The printf project is a collaboration between Oyeyinka Dairo and Jesubukade Ajakaye, students of Software Engineering at ALX.


This function is called "_printf()" and it replicates the actual "printf()" command located in the stdio.h library of C programming Language. It contains some of the basic features and functions found in the manual 3 of "printf".


_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

  int _printf(const char *format, ...)
  
Where format contains the string that is printed.


_printf() is a variadic function, it can receive a number of finite (n) arguments that can be replaced by a number of n tags written inside the string function.


The format tags prototype is the following:


%[flags][length]specifier

If the program runs successfully, the return value is the amount of chars printed.



File Functions

_printf.c

Own Printf Function That Performs Formatted Output Conversion And Prints Data To The Standard Output.

main.h

It Is A Header File That Contains All The Prototypes Used.
