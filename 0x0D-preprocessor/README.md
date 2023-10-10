# STARTED WITH C
### Project number 14
## 0x0D. C - Preprocessor


* In this project, I explored the world of C preprocessor directives, which allow for code manipulation and configuration at the preprocessing stage.
These directives, often invoked using macros, can significantly impact the behavior and structure of a C program.

## Task 0: Object-like Macro 🧱
- **File:** `0-object_like_macro.h`
- **Description:** In this task, a header file was created to define a macro named `SIZE`, which serves as an abbreviation for the token `1024`.
- **Fun Fact:** Object-like macros act like find-and-replace operations, allowing you to use `SIZE` in your code, which will be substituted with `1024` during preprocessing. It's like having a code assistant that makes your code more readable.

## Task 1: Pi 🥧
- **File:** `1-pi.h`
- **Description:** This task involved creating a header file that defines a macro named `PI`, which is an abbreviation for the token `3.14159265359`.
- **Fun Fact:** Using macros to define constants like `PI` helps in writing more maintainable code. It's like giving a meaningful name to a magic number, making it easier to understand the purpose of the value in your code.

## Task 2: File Name 📜
- **File:** `2-main.c`
- **Description:** In this task, a program was written to print the name of the file it was compiled from, followed by a new line.
- **Fun Fact:** Did you know that the `__FILE__` predefined macro is automatically replaced by the current source file's name during preprocessing? It's a handy way to include file information in your program.

## Task 3: Function-like Macro 🔄
- **File:** `3-function_like_macro.h`
- **Description:** This task involved writing a function-like macro named `ABS(x)` that computes the absolute value of a number `x`.
- **Fun Fact:** Function-like macros allow you to create code snippets that resemble functions but get replaced during preprocessing. It's like having custom functions tailored to your specific needs.

## Task 4: SUM 🧮
- **File:** `4-sum.h`
- **Description:** In this task, a function-like macro named `SUM(x, y)` was written to compute the sum of two numbers `x` and `y`.
- **Fun Fact:** Function-like macros can take parameters and perform calculations, making them versatile tools for simplifying complex expressions and improving code readability.

> These tasks demonstrate the power of C preprocessor directives and macros in enhancing code clarity, maintainability, and flexibility.

> Feel free to explore each task's code and experiment with macros to see how they can streamline your C programs.

