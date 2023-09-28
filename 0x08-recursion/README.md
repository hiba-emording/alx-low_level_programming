# STARTED WITH C
## My 9th project
### 0x08. C - Recursion

## Recursion in C

Recursion is a programming technique in C where a function calls itself to solve a problem. It is commonly used to break down complex problems into simpler, more manageable subproblems.

### Key Concepts

1. **Base Case**: Recursive functions must have one or more base cases, which are the simplest instances of the problem that can be solved directly without further recursion. They act as stopping conditions.

2. **Recursive Case**: In the recursive case, the function calls itself with modified arguments, typically making the problem smaller in some way. This step progresses toward the base case.

3. **Stack**: Recursion uses a stack-like mechanism to manage function calls. Each recursive call is added to the call stack, and when a base case is reached, calls are resolved in reverse order.

### Advantages

- **Elegance**: Recursion can simplify code and make it more readable for certain types of problems.
- **Complex Problems**: It's ideal for solving problems that can be broken down into smaller, similar subproblems.

### Considerations

- **Efficiency**: Recursive solutions can be less efficient due to the overhead of function calls and the potential for excessive stack space usage.
- **Stack Overflow**: Recursive functions without proper termination conditions can lead to stack overflow errors.

Recursion is a powerful tool in C programming when used appropriately. Understanding when and how to apply it is key to solving complex problems efficiently.

## Scripts:

Welcome to the fascinating world of recursion in C programming!
In this project, we'll explore the concept of recursion, learn how to implement recursive functions, and gain insights into the power of recursive problem-solving techniques. Recursion is like a never-ending journey, where each step reveals new depths of understanding and creativity. Let's embark on this adventure together!

### Task 0: String Print (0-puts_recursion.c)
- **Description:** This function prints a string, followed by a new line, using recursion.
- **Fun Fact:** Recursion can be thought of as a problem-solving technique where a function calls itself to solve a smaller instance of the same problem. It's like having a magical mirror that reflects a smaller version of the world, and you keep exploring it until you find the answer you seek! 🔮✨

### Task 1: Reverse String (1-print_rev_recursion.c)
- **Description:** Write a function that prints a string in reverse, using recursion.
- **Fun Fact:** Recursion can be a mesmerizing journey backward in time. It's like retracing your steps through a maze to find the treasure at the very beginning! 🕰️🔍

### Task 2: String Length (2-strlen_recursion.c)
- **Description:** This function returns the length of a string using recursion.
- **Fun Fact:** Recursion is like an explorer measuring the depth of a cave with a long rope. It goes deeper and deeper until it finds the end, telling you exactly how long the cave is! 🧭🏞️

### Task 3: Factorial (3-factorial.c)
- **Description:** Write a function that returns the factorial of a given number using recursion.
- **Fun Fact:** Recursion is like a magic wand that multiplies numbers together one by one. It's as if each number is a piece of a puzzle, and the function assembles them to reveal the final picture! 🧩✨

### Task 4: Power of a Number (4-pow_recursion.c)
- **Description:** This function returns the value of x raised to the power of y using recursion.
- **Fun Fact:** Recursion is like having a superpower to repeatedly multiply a number by itself, just like compound interest growing over time! 💰💹

### Task 5: Square Root (5-sqrt_recursion.c)
- **Description:** Write a function that returns the natural square root of a number using recursion.
- **Fun Fact:** Recursion is like diving into a pool to find the hidden treasure at the bottom. You keep diving deeper and deeper until you uncover the precious gem! 💎🏊‍♂️

### Task 6: Prime Number (6-is_prime_number.c)
- **Description:** This function returns 1 if the input integer is a prime number, otherwise, it returns 0, using recursion.
- **Fun Fact:** Recursion is like a detective on a quest to find prime numbers. It carefully examines each number, eliminating suspects until it identifies the true prime! 🕵️‍♂️🔍

### Task 7: Palindrome Check (100-is_palindrome.c)
- **Description:** Write a function that returns 1 if a string is a palindrome and 0 if not, using recursion.
- **Fun Fact:** Recursion is like exploring a mirror world, comparing each character in the string to its reflection until it reveals whether the string is a palindrome! 🪞🔄

### Task 8: String Comparison with Wildcards (101-wildcmp.c)
- **Description:** This function compares two strings and returns 1 if the strings can be considered identical, otherwise, it returns 0. It uses the concept of wildcards.
- **Fun Fact:** Comparing strings with wildcard characters is like solving a complex puzzle where each asterisk (*) can match any sequence of characters. The function explores all possibilities to determine if the strings are identical, making it a powerful tool for pattern matching! 🧩🌟

