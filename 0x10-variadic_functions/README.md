## STARTED WITH C
### PROJECT NUMBER 17
# 0x10. C - Variadic functions


* In this project, I explored the fascinating world of variadic functions in C.
Variadic functions are functions that can accept a variable number of arguments, providing flexibility in handling different types and quantities of data.

## Task 0: Beauty in Variability 🌟
- **File:** `0-sum_them_all.c`
- **Description:** This task involved writing a function that returns the sum of all its parameters, accepting a variable number of arguments.
- **Fun Fact:** Variadic functions are like all-you-can-eat buffets for functions. They allow you to serve up any number of arguments, making your functions incredibly adaptable.

## Task 1: Printing the Numbers 📃
- **File:** `1-print_numbers.c`
- **Description:** In this task, I created a function that prints numbers, followed by a specified separator, with a variable number of integer arguments.
- **Fun Fact:** Variadic functions can be used for dynamic formatting. Just like adding different seasonings to a dish, you can customize the output of your function with a separator.

## Task 2: Printing the Strings 🧵
- **File:** `2-print_strings.c`
- **Description:** This task involved writing a function that prints strings, with a specified separator, using a variable number of string arguments.
- **Fun Fact:** Variadic functions aren't just for numbers; they can handle strings too. It's like a Swiss Army knife for printing various types of data.

## Task 3: Printing Everything 🌐
- **File:** `3-print_all.c`
- **Description:** This task required creating a function that prints anything based on a format string, accepting a variable number of arguments with different types.
- **Fun Fact:** Variadic functions are like magicians who can handle any type of trick. With the right format string, you can instruct the function to handle various data types gracefully.

> These tasks showcase the incredible flexibility and adaptability of variadic functions in C. Whether you're summing numbers, printing strings, or dealing with a mix of data types, variadic functions offer a powerful toolset for handling diverse data scenarios.


* ~ More details about task 3 _was the most challenging_ :

## Task 3 Summary

**Function Name:** print_all

**Function Prototype:** void print_all(const char * const format, ...)

**Supported Format Specifiers:**
- 'c': Char
- 'i': Integer
- 'f': Float
- 's': String

**Separator String:** The function prints a separator string (`, `) between values when multiple values are provided.

**Null String Handling:** When a string argument is NULL, the function prints "(nil)" instead.

**Newline:** The function prints a newline character at the end.

**Constraints:**
- Maximum of two while loops.
- Maximum of two if statements.
- Maximum of nine variables.
- No use of for, goto, ternary operators, else, or do...while.

**Implementation:**

The provided code defines the `print_all` function, which processes a format string and variadic arguments.
It uses a switch statement to handle different format specifiers and correctly prints the corresponding values.
The code also handles null string arguments appropriately. Variable names have been chosen for clarity and readability.


