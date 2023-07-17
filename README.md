# _printf

# A stripped-down version of the C function "printf"
  
This project was part of my studies at Holberton to understand the functionality of variadic functions. Each student created their own version of printf. Here is my rendition!

This function is a variadic function that takes as its arguments the named argument "format", a format string used by _printf to print values or variables to the standard output, followed by a variable number of arguments, those of which will replace specifiers found in the format string. Specifiers are always denoted by a "%" followed by the following specifier characters:

i, d - An integer value (such as 4)
c - A character (such as "d")
s - A string (such as "Hello")
% - A literal percent sign

_printf will iteratively print the format string until it reaches a specifier, then fetches the next arguement and prints that argument in place of the specifier.

# How to use

_printf is a C function, so make sure that you:
A) download the "holbertonschool-printf" repository to your machine,
B) Add the line '#include "/holbertonschool-printf/_printf.c"' at the top of the .c file that you would like to use the function with (or alongside the includes in your .h file).

The function's basic format is as follows: _printf(const char *format, ...) [where ... is a variable number of other arguments that you want printed].

Say we wanted to _printf "Hello World" followed by a newline. One way to do it would be the following:
EXAMPLE: _printf("Hello World\n");
OUTPUT: Hello World

You could also use specifiers to denote strings, characters or integers, such as the following:
EXAMPLE: _printf("Hello %s\n", "World")
OUTPUT: Hello World

# Expanding on this project

As previously stated, this function is barebones compared to printf, but if you would like to add more specifiers, give the tool the ability to handle user precision, or more, clone this repository, test new ideas out, and email 6621@holbertonstudents.com with any tweaks you would like added to the main repository!

# Finding bugs?

You can reach out to that same email (6621@holbertonstudents.com) to report bugs.

# Known issues

Currently the _printf function relies more on user precision than the printf function it imitates. For example, say you tried to utilize _printf this way:

_printf("%i is greater than %d and %i\n", 10, 5);

The function calls _printf with a format string containing 3 specifiers (%i, %d, %i), but it is only provideed 2 unnamed arguments after format (10, 5). The code will print the first 2 unnamed arguments just fine, but it will then try to fetch a third argument for the second %i specifier. This will result in _printf printing garbage data in place of the third specifier %i.

# Authors

Brad Brown
Matthew Montgomery
