# STARTED WITH C
### PROJECT NUMBER 15
## 0x0E. C - Structures, typedef


* In this project, I delved into the world of C structures and typedefs.
Structures allow you to define custom data types, bundling multiple variables of different types into a single unit, while typedefs provide the flexibility of creating aliases for existing data types.

## Task 0: Poppy 🐶
- **File:** `dog.h`
- **Description:** In this task, I defined a new data type called `struct dog` with three elements: `name` (a `char *`), `age` (a `float`), and `owner` (a `char *`).
- **Fun Fact:** Structures in C are like containers that can hold various types of data. Just as a dog's collar holds information about the dog, structures can hold information about different aspects of data in your programs.

## Task 1: Unconditional Love ❤️🐾
- **File:** `1-init_dog.c`
- **Description:** This task involved writing a function called `init_dog` to initialize a variable of type `struct dog` with values for `name`, `age`, and `owner`.
- **Fun Fact:** Just as you can nurture and care for a dog, the `init_dog` function cares for the well-being of your `struct dog` by initializing its attributes with the values you provide.

## Task 2: A Dog's Portrait 📸🐕
- **File:** `2-print_dog.c`
- **Description:** In this task, I created a function named `print_dog` that prints the contents of a `struct dog`. The function follows specific formatting rules and handles cases where elements of the structure are `NULL`.
- **Fun Fact:** Much like capturing a dog's personality in a photograph, the `print_dog` function captures the essence of a `struct dog` in a human-readable format.

## Task 3: New Dog Type 🐾🐶
- **File:** `dog.h`
- **Description:** This task involved defining a new type named `dog_t` using a typedef, which serves as an alias for the `struct dog` type.
- **Fun Fact:** Typedefs in C allow you to create custom names for data types, making your code more readable and expressive. In this case, `dog_t` becomes a shorthand for `struct dog`.

## Task 4: Creating a New Dog 🆕🐶
- **File:** `5-free_dog.c`
- **Description:** In this task, I implemented a function called `new_dog` that creates a new `struct dog` dynamically, initializes its attributes with the provided values, and returns a pointer to the newly created dog.
- **Fun Fact:** Just as welcoming a new dog into your life can bring joy and excitement, the `new_dog` function brings a new "dog" (struct) to your program, ready to be cared for and used.

> These tasks showcase the power of structures and typedefs in C, allowing for the creation and manipulation of complex data types. They also emphasize the importance of proper initialization and handling of data structures in programming.

