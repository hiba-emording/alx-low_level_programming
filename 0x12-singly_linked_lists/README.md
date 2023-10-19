## STARTED WITH C
### PROJECT NUMBER 18

# 0x12. C - Singly linked lists


* In this project, I explored the world of singly linked lists, a fundamental data structure in computer science.
* Singly linked lists consist of nodes, each containing data and a reference to the next node, forming a chain-like structure.

## Task 0: Printing a Linked List 🖨️
- **File:** `0-print_list.c`
- **Description:** This task involved creating a function that prints all the elements of a linked list (`list_t`) and returns the number of nodes.
- **Fun Fact:** Singly linked lists are like a daisy chain of data, and they provide a simple yet essential way to organize and traverse data efficiently.

## Task 1: Counting Elements 🧮
- **File:** `1-list_len.c`
- **Description:** In this task, I implemented a function that returns the number of elements in a linked list (`list_t`).
- **Fun Fact:** Counting elements in a linked list is akin to counting the beads on a necklace. It helps you understand the size of your data structure.

## Task 2: Adding a Node at the Beginning 🏁
- **File:** `2-add_node.c`
- **Description:** This task involved writing a function to add a new node at the beginning of a linked list (`list_t`).
- **Fun Fact:** Adding a node at the beginning is like inserting a new page at the start of a book. It updates the reference to the first page, ensuring the new data is easily accessible.

## Task 3: Adding a Node at the End 🏁
- **File:** `3-add_node_end.c`
- **Description:** Here, I implemented a function to add a new node at the end of a linked list (`list_t`).
- **Fun Fact:** Adding a node at the end is like appending a new chapter to the end of a story. It extends the list, making room for additional data.

## Task 4: Freeing a Linked List 🧹
- **File:** `4-free_list.c`
- **Description:** This task required creating a function that frees a linked list (`list_t`).
- **Fun Fact:** Freeing a linked list is like closing a book and returning it to the library shelf. It ensures that the memory used by the list is released, preventing memory leaks.

## Task 5: The Hare and the Tortoise 🐢🐇
- **File:** `100-first.c`
- **Description:** In this task, I wrote a function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!" before the `main` function is executed.
- **Fun Fact:** This task is a reference to Aesop's fable "The Tortoise and the Hare," highlighting the concept of preparation before the race begins.

## Task 6: Writing Assembly Code ✍️
- **File:** `101-hello_holberton.asm`
- **Description:** In this task, I wrote a 64-bit assembly program that prints "Hello, Holberton," followed by a new line, using the `printf` function.
- **Fun Fact:** Writing assembly code is like composing a symphony in machine language. It offers unparalleled control over a computer's hardware and a deep understanding of low-level operations.
- **Additional Explanation:** Assembly language is a low-level programming language that directly communicates with a computer's central processing unit (CPU). In this task, we created an assembly program that uses Intel x86 assembly syntax.

### The Code Explained

#### `.data` Section
- In the `.data` section, we define a null-terminated string (a sequence of characters) with the message "Hello, Holberton" followed by a newline character (0xa) and a null terminator (0). The `format` label is used to reference this string.

#### `.text` Section
- In the `.text` section, we define the entry point of our program, labeled as `main`.

#### `mov` Instructions
- The `mov` instructions move values into registers. In this code, we use `mov edi, format` to load the address of the `format` string into the `edi` register.
- We use `mov eax, 0` to set the `eax` register to 0. This is often used to indicate a successful execution.

#### `call` Instruction
- The `call` instruction transfers control to the `printf` function, passing the address of the `format` string as an argument. The `printf` function is an external function, and we use `extern printf` to declare its existence.


> These tasks provide a deep dive into the world of linked lists and even take a glimpse into the art of assembly programming. Linked lists are a foundational data structure with versatile applications in computer science and programming.
 
