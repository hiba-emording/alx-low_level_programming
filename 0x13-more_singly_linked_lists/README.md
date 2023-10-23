## STARTED WITH C
### PROJECT NUMBER 19

# 0x13. C - More singly linked lists


* This project involves working with singly linked lists in the C programming language. You'll be implementing various functions for creating, manipulating, and managing linked lists.

## List of Tasks

### Task 0: Print List 📃
- **File:** `0-print_listint.c`
- **Description:** Write a function to print all the elements of a listint_t list.
- **Fun Fact:** 🤓 Printing a linked list is a common debugging technique for verifying the list's structure and data.

### Task 1: List Length 📏
- **File:** `1-listint_len.c`
- **Description:** Write a function to return the number of elements in a linked listint_t list.
- **Fun Fact:** 📊 Calculating the length of a linked list is a fundamental operation in many data structures and algorithms.

### Task 2: Add Node ➕
- **File:** `2-add_nodeint.c`
- **Description:** Write a function to add a new node at the beginning of a listint_t list.
- **Fun Fact:** 🚀 Adding nodes at the beginning is a fast operation and allows for efficient insertion.

### Task 3: Add Node at the End 🏁
- **File:** `3-add_nodeint_end.c`
- **Description:** Write a function to add a new node at the end of a listint_t list.
- **Fun Fact:** 🏁 Adding nodes to the end of a list is useful when maintaining a queue of elements.

### Task 4: Free List 🆓
- **File:** `4-free_listint.c`
- **Description:** Write a function to free a listint_t list.
- **Fun Fact:** 💡 Freeing memory associated with linked lists is essential to avoid memory leaks.

### Task 5: Free List (Version 2) 🆓
- **File:** `5-free_listint2.c`
- **Description:** Write a function to free a listint_t list and set the head to NULL.
- **Fun Fact:** 🧹 Setting the head to NULL after freeing the list ensures it is safe to work with the list variable again.

### Task 6: Pop 💥
- **File:** `6-pop_listint.c`
- **Description:** Write a function to delete the head node of a listint_t linked list and return its data.
- **Fun Fact:** 🪓 Popping the head node is a common operation for managing data structures like stacks.

### Task 7: Get Node at Index 🔍
- **File:** `7-get_nodeint.c`
- **Description:** Write a function to return the nth node of a listint_t linked list based on the index.
- **Fun Fact:** 🔎 Retrieving nodes at specific indexes is important for accessing elements within the list.

### Task 9: Insert 📥
- **File:** `9-insert_nodeint.c`
- **Description:** Write a function to insert a new node at a given position in a listint_t list.
- **Fun Fact:** 📌 Inserting nodes at specific positions is useful for ordered or custom insertion.

### Task 10: Delete at Index ❌
- **File:** `10-delete_nodeint.c`
- **Description:** Write a function to delete the node at a specific index in a listint_t linked list.
- **Fun Fact:** 🗑️ Deleting nodes at specific indexes is an essential part of maintaining lists.

### Task 11: Reverse List 🔄
- **File:** `100-reverse_listint.c`
- **Description:** Write a function to reverse a listint_t linked list.
- **Fun Fact:** 🔄 Reversing a linked list is a classic interview question and has various practical applications.

### Task 12: Print (Safe Version) 🔄
- **File:** `101-print_listint_safe.c`
- **Description:** Write a function to print a listint_t linked list, even if it contains a loop.
- **Fun Fact:** 🏃‍♂️ Detecting and printing a list with a loop requires an efficient algorithm like Floyd's cycle detection.

### Task 13: Free (Safe Version) 🆓
- **File:** `102-free_listint_safe.c`
- **Description:** Write a function to free a listint_t list, even if it contains a loop.
- **Fun Fact:** 🔗 Freeing lists with loops requires a smart approach to avoid infinite loops.

### Task 14: Find the Loop 🔄
- **File:** `103-find_loop.c`
- **Description:** Write a function to find the loop in a linked list.
- **Fun Fact:** 🧐 Detecting loops in linked lists is a fascinating problem, solved by the Floyd cycle detection algorithm.

## About the Floyd Cycle Detection Algorithm 🏃‍♂️

The Floyd cycle detection algorithm, also known as the "tortoise and hare" algorithm, is a popular technique for identifying cycles or loops within a linked list. It involves two pointers, one moving slower (tortoise) and the other faster (hare). By advancing the pointers through the list, the algorithm can detect whether the linked list contains a loop. If a loop exists, the two pointers will eventually meet, confirming the presence of a cycle. This algorithm is a crucial tool for efficiently detecting and working with loops in linked lists.

Happy coding! 🚀
``

