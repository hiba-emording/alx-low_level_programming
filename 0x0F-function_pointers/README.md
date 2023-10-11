### STARTED WITH C
### PROJECT NUMBER 16
## 0x0F. C - Function pointers


* In this project, I delved into the fascinating world of function pointers in C.
Function pointers allow for dynamic function calls, which provide flexibility in selecting and executing functions during runtime.

### Task 0: What's My Name? 🤔
- **File:** `0-print_name.c`
- **Description:** This task required writing a function that prints a name using a function pointer.
- **Fun Fact:** Function pointers are like magic wands in C programming. They allow you to dynamically select and execute functions, offering powerful opportunities for code modularity and flexibility.

### Task 1: Get It Done! ✅
- **File:** `1-array_iterator.c`
- **Description:** In this task, I created a function that executes a function given as a parameter on each element of an array using a function pointer.
- **Fun Fact:** Function pointers are akin to the conductor's baton in an orchestra, directing the performance. They enable you to apply the same operation to each element in an array, offering a smart and efficient way to manipulate data.

### Task 2: Seeking an Integer 🔍
- **File:** `2-int_index.c`
- **Description:** This task involved writing a function that searches for an integer using a function pointer to compare values.
- **Fun Fact:** Function pointers are like detectives on a quest, seeking specific values. They can be employed for custom search criteria, allowing you to hunt down data efficiently.

### Task 3: Calculator of Opportunities 🧮
- **Files:** `3-calc.h`, `3-op_functions.c`, `3-get_op_func.c`, `3-main.c`
- **Description:** This task required creating a program that performs simple arithmetic operations, with the operator specified in the command line input.
- **Fun Fact:** This task mimics the behavior of a calculator, which employs a menu, operators, and a manager to handle arithmetic operations. Function pointers are the gears that power this dynamic operation selection, turning a simple program into a versatile calculator.

### Task 4: Exploring Op Codes 🕵️‍♂️
- **File:** `100-main_opcodes.c`
- **Description:** In this task, I created a program that prints the opcodes of its own main function.
- **Fun Fact:** Opcodes are like secret instructions that CPUs understand. In this task, we peek into the realm of low-level programming, where opcodes are the language CPUs speak.

> These tasks showcase the versatility of function pointers and their role in enabling dynamic and flexible program behavior. Whether you're printing names, orchestrating array operations, performing searches, or diving into opcodes, function pointers are your trusty tools in the world of C programming.


* ~ More details about Task 3 and 4.

# Calculator Program

## Task Description

This program performs basic mathematical operations (addition, subtraction, multiplication, division, and modulo) on two integers. It takes command-line arguments to specify the operation and the numbers to operate on and includes comprehensive error handling.

## Requirements

**Usage:** The program is designed to be run from the command line, and it expects three command-line arguments: `num1`, `operator`, and `num2`. For example, `calc 5 + 3`.

**Argument Conversion:** The program assumes that `num1` and `num2` are provided as strings and need to be converted into integers using the `atoi` function.

**Valid Operators:** The `operator` must be one of the following: `+` (addition), `-` (subtraction), `*` (multiplication), `/` (division), or `%` (modulo).

**Result Printing:** After performing the operation, the program prints the result followed by a new line.

**Error Handling:**

- If the number of command-line arguments is not exactly three (in addition to the program name), the program prints "Error" and exits with a status code of 98.
- If the `operator` is not one of the valid operators, the program prints "Error" and exits with a status code of 99.
- If the user attempts to divide by zero (using `/` or `%` with `num2` as 0), the program prints "Error" and exits with a status code of 100.

**Integer Result:** The program assumes that the result of all operations can be stored as an integer.

## Code Structure

The code is organized into four different files to separate concerns and make it more modular and readable:

**1. 3-calc.h:**

- This header file defines the data structure `op_t` and function prototypes. It includes a structure that contains an operator (like '+', '-', etc.) and a corresponding function pointer. The function prototypes specify the operations and the functions that perform them.

**2. 3-op_functions.c:**

- This source file contains the actual functions that perform the operations. There are separate functions for addition, subtraction, multiplication, division, and finding the remainder. For example, the `op_add` function takes two numbers and returns their sum. The code also checks for division by zero and prints an error message in such cases.

**3. 3-get_op_func.c:**

- This part contains the `get_op_func` function that selects the correct operation function based on the operator provided by the user.

  - It takes a string `s` (the operator) as a parameter.
  - It defines an array of `op_t` structures, each containing an operator and a function pointer. The array represents the valid operators and the associated functions to perform.
  - It then iterates through the array of structures, comparing the operator in each structure to the operator provided as an argument.
  - If a match is found, and the operator is valid (i.e., it's one character long), it returns the corresponding function pointer.
  - If no match is found, it prints an error message and exits with status 99.

**4. 3-main.c:**

- This is the main program file:

  - It checks the number of arguments provided to ensure that there are exactly three (the program name, `num1`, `operator`, and `num2`).
  - It converts the input arguments `argv[1]` and `argv[3]` (num1 and num2) from strings to integers using the `atoi` function.
  - It calls `get_op_func` with `argv[2]` (the operator) to get the corresponding function pointer.
  - It checks if the returned function pointer is not NULL, which indicates a valid operator.
  - If the operator is valid, it calls the selected operation function with `num1` and `num2` and stores the result.
  - Finally, it prints the result and exits with status 0.

## Handling Scenarios

The program handles different scenarios as follows:

- If the number of arguments is not three, it prints "Error" and exits with status 98.
- If the operator is not valid (not one of "+", "-", "*", "/", or "%"), it prints "Error" and exits with status 99.
- If there's an attempt to divide by zero (using "/" or "%"), it prints "Error" and exits with status 100.

> This code structure and logic allow for the execution of basic arithmetic operations on integers through a command-line interface, with error handling for various edge cases.


# Main Opcodes Printer

## Task Description
This program prints the opcodes of its own `main` function. It accepts a command-line argument specifying the number of opcodes to print and follows specific rules and error-checking procedures.

## Requirements

**Usage:** The program should be executed from the command line, and the user must provide one argument - the number of bytes of opcodes to print. The usage format is `./main_opcodes number_of_bytes`.

**Output Format:** The opcodes are printed in hexadecimal, lowercase format, with two characters per opcode. The listing of opcodes ends with a new line.

**Allowed Functions:** The program uses the `printf` and `atoi` functions to accomplish the task.

**Error Handling:**
- If the number of command-line arguments is not exactly one (in addition to the program name), the program prints "Error" and exits with a status code of 1.
- If the provided number of bytes is negative, the program prints "Error" and exits with a status code of 2.

**No Compilation Flags:** No special compilation flags are needed to compile the program.

**Additional Note:** You can use tools like `udcli` if you want to translate the opcodes into assembly instructions.

## Explanation

The program's main goal is to print the opcodes of its own `main` function. It follows these steps:

1. **Check Command-Line Arguments:** The program checks if the correct number of command-line arguments is provided. If not, it prints "Error" and exits with a status code of 1.

2. **Convert Bytes:** The user-provided number of bytes is converted to an integer using `atoi`. This value determines how many opcodes are printed.

3. **Access `main` Function:** The program directly accesses the opcodes of its `main` function without using a function pointer. It eliminates the need for a function pointer.

4. **Print Opcodes:** The program treats the `main` function as an array of characters (`unsigned char`) and accesses the opcodes one by one. It prints each opcode in hexadecimal format, continuing this process for the specified number of bytes.

5. **Exit:** After printing the opcodes, the program exits with a status code of 0, indicating successful execution.

> In summary, the program explores the bytes of its own `main` function and prints them in a specific format. It performs error checking to ensure the user provides the correct arguments and handles negative byte counts as an error condition.



