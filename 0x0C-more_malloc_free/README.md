# STARTED WITH C
## Project number 13
 ~ My lucky number .
### 0x0C. C - More malloc, free


* In this project, I worked on tasks that continued to explore memory allocation and deallocation in C using `malloc` and `free`.
These tasks required careful memory management and handling different scenarios gracefully.

## Task 0: Trust No One 🕵️‍♂️
- **File:** `0-malloc_checked.c`
- **Description:** In this task, a function called `malloc_checked` was implemented to allocate memory using `malloc`. The function returns a pointer to the allocated memory and, if `malloc` fails, causes the program to terminate with a status value of 98.
- **Fun Fact:** Trusting that memory allocation always succeeds can lead to unforeseen issues. The function's name reminds us to handle memory allocation failures with care.

## Task 1: String Concatenation 🧵
- **File:** `1-string_nconcat.c`
- **Description:** This task involved writing a function called `string_nconcat` to concatenate two strings. The function returns a pointer to a newly allocated space in memory containing the first `n` bytes of the second string appended to the first string.
- **Fun Fact:** String concatenation is like piecing together a puzzle, where each piece is a character. This task demonstrates how to create a new puzzle by combining pieces from two different puzzles.

## Task 2: Allocating Arrays 📦
- **File:** `2-calloc.c`
- **Description:** In this task, a function named `_calloc` was created to allocate memory for an array using `malloc`. The function returns a pointer to the allocated memory, with the added feature that it initializes the memory to zero. It handles cases where `nmemb` or `size` is 0.
- **Fun Fact:** Initializing memory to zero can be like starting with a clean slate. It ensures that data in the allocated memory is not left with unpredictable values.

## Task 3: Creating Integer Arrays 📊
- **File:** `3-array_range.c`
- **Description:** This task required writing a function called `array_range` to create an array of integers containing values from `min` to `max`, inclusive. The function handles cases where `min` is greater than `max`.
- **Fun Fact:** Creating an array of numbers is like building a bridge between two points. This task involves constructing a bridge of integers from `min` to `max`.

## Task 4: Reallocating Memory Blocks ♻️
- **File:** `100-realloc.c`
- **Description:** In this task, a function named `_realloc` was implemented to reallocate a memory block using `malloc` and `free`. It copies the contents to the new block and handles various scenarios, including when `ptr` is `NULL` and when `new_size` is 0.
- **Fun Fact:** Reallocating memory can be compared to moving to a new house with your belongings. You pack up, move, and unpack in a new, appropriately sized location.

## Task 5: Infinite Hope and Multiplication 🌟
- **File:** `101-mul.c`
- **Description:** This task involved writing a program that multiplies two positive numbers passed as command-line arguments. It ensures valid input and prints the result. If the input is incorrect, it exits with a status of 98.
- **Fun Fact:** Did you know that the concept of multiplication was initially introduced to computers through the "shift and add" method? Early computers used this technique, which involved shifting bits and adding numbers repeatedly, to perform multiplications. Over time, hardware advancements led to dedicated multiplication units, making this fundamental operation lightning-fast in modern computing.


> These tasks further deepened our understanding of memory management and its importance in programming. They also highlighted the need to gracefully handle errors and invalid inputs.

> Feel free to explore each task's code to gain a deeper understanding of dynamic memory allocation and practical applications in C programming.

