# STARTED WITH C
## My 8th Project
### 0x07. C - Even more pointers, arrays and strings


## Scripts:

### Task 0: Memory Filling (0-memset.c)
- **Description:** This task requires you to fill memory with a constant byte. The `_memset` function takes a memory area `s`, a constant byte `b`, and the number of bytes `n`. It then magically fills the first `n` bytes of `s` with `b` and returns a pointer to the memory area.
- **Fun Fact:** Memory filling is like painting a canvas with a specific color. It's a fundamental operation used for initializing data structures and more. 🎨

### Task 1: Memory Copy (1-memcpy.c)
- **Description:** Time to copy some memories! The `_memcpy` function is your trusty memory copier. It takes memory areas `dest`, `src`, and the number of bytes `n`. It gracefully copies `n` bytes from `src` to `dest` and returns a pointer to `dest`.
- **Fun Fact:** Memory copying is like cloning objects in the digital world. It's a building block for data manipulation and transfer. 🧬

### Task 2: String Locator (2-strchr.c)
- **Description:** Hunt for characters in a string! This task involves the `_strchr` function, which helps you locate a character `c` in a string `s`. It returns a pointer to the first occurrence of `c` in `s` or `NULL` if it's nowhere to be found.
- **Fun Fact:** Character searching in strings is like finding a hidden treasure. It's essential for parsing text and extracting specific information. 🕵️‍♀️💎

### Task 3: Prefix Length (3-strspn.c)
- **Description:** Discover the length of a prefix substring! The `_strspn` function is your guide. It takes a string `s` and an `accept` string. It returns the number of bytes in the initial segment of `s` that consist only of bytes from `accept`.
- **Fun Fact:** Determining prefix length is like measuring the boundaries of your domain. It's often used for input validation and parsing. 📏

### Task 4: Byte Search (4-strpbrk.c)
- **Description:** Time to search for specific bytes! The `_strpbrk` function finds the first occurrence of any byte from `accept` in the string `s`. It returns a pointer to the matching byte in `s` or `NULL` if no match is found.
- **Fun Fact:** Byte searching is like looking for ingredients in your pantry to cook a dish. It's a fundamental operation in text processing. 🍳🔍

### Task 5: Substring Locator (5-strstr.c)
- **Description:** Locate a substring within a string! The `_strstr` function is your trusty guide. It finds the first occurrence of the substring `needle` in the string `haystack`. Unlike Sherlock Holmes, it doesn't care about the null bytes (`\0`) and returns a pointer to the beginning of the located substring or `NULL` if it's playing hide and seek.
- **Fun Fact:** Substring searching is like finding a needle in a haystack (pun intended). It's used in text search engines, parsers, and more. 🧐🪡

### Task 6: Chessboard Printing (6-print_chessboard.c)
- **Description:** It's time to play chess on your terminal! The `print_chessboard` function takes a chessboard represented as an array of strings and prints it beautifully on your screen.
- **Fun Fact:** Chess is an ancient game of strategy, and printing a chessboard is like setting up the battlefield for epic battles. ♟️⚔️

### Task 7: Diagonal Summing (7-print_diagsums.c)
- **Description:** Feel like a mathematician with this task! The `print_diagsums` function takes a square matrix of integers and calculates the sums of its two diagonals: from the top-left to the bottom-right and from the top-right to the bottom-left. It then prints these sums.
- **Fun Fact:** Summing diagonals in matrices is like exploring the hidden patterns in data. It's used in image processing, game development, and more. 🧮🔍

### Task 8: Setting the String (8-set_string.c)
- **Description:** Let's get fancy with pointers! The `set_string` function sets the value of a pointer to a character (`char **s`) to another character pointer (`char *to`). It's like swapping name tags at a party, ensuring you're always addressed correctly.
- **Fun Fact:** Manipulating pointers to pointers is like navigating through a maze of references. It's a step toward understanding complex data structures. 🧩

### Task 9: The Password Quest (100-password)
- **Description:** Embark on a quest to find the password! You need to create a file (`100-password`) that contains the exact password for the `crackme2` executable. No new lines, no extra spaces—just the key to unlock the secret.
- **Fun Fact:** Cracking passwords may sound mysterious, but it often involves analyzing and reverse-engineering code. It's like solving a puzzle to uncover hidden knowledge. 🔐🔍


### Cracking the Code: A Fun Adventure 🕵️‍♂️🔐

👋 Hey there, intrepid coder! Welcome to a thrilling quest in the world of executables and secret passwords. 🚀

#### The Mysterious Executable: "crackme2" 🧩

In your code arsenal, you have a mysterious executable known as "crackme2." What's it hiding? That's what we're here to find out! This elusive program seems to hold its secrets behind a password. Your mission, should you choose to accept it, is to uncover this hidden key. 🔑

#### Essential Detective Tools 🔍🔦

But fear not! You won't be going into this adventure empty-handed. You've got a toolkit of trusty tools at your disposal:

🕵️‍♂️ **ltrace**: This tool is like a detective's magnifying glass, helping you trace the library calls made by "crackme2."

📚 **ldd**: It's your library librarian, showing you which shared libraries "crackme2" depends on. Knowledge is power!

🐞 **gdb**: The GNU Debugger is your partner in crime... solving! You'll use it to debug and analyze programs, even peering into their memory.

💡 **objdump**: Think of it as your code archaeologist's toolkit, ready to unearth the secrets hidden within the program's assembly code.

#### The Adventure Begins: Your Possible Approach 🚁

Now, how to crack the code? Here's a roadmap for your adventure:

1. 🏰 **Library Exploration**: Start by running `ldd crackme2` to unveil the libraries this program relies on. This might just reveal some vital clues about its purpose.

2. 📢 **Trace the Trail**: Activate `ltrace ./crackme2` to trace the program's library calls during execution. Who knows, you might stumble upon those elusive password-related functions!

3. 🔍 **Debugger's Delight**: Enter the world of `gdb` and set breakpoints where the password magic happens. Time to dig into the program's memory and behavior.

4. 🕵️‍♂️ **Code Inspection**: With `objdump`, you can disassemble the binary and get a glimpse of its assembly code. This might just be where the secrets are hiding.

#### Equipping for Success: Dependencies 🛠️

Before you embark on this journey, make sure you're prepared. You might need to install the `libssl` library to run "crackme2." Don't worry; you've got it covered with the installation instructions you provided.

#### The Final Showdown: Password File 📜

Once you've cracked the code and found the password, you're not done yet! Your mission concludes with creating a file that contains the exact password. Keep it tidy—no extra spaces or newlines allowed. The finish line is in sight! 🏁


So, dear adventurer, arm yourself with knowledge, don your detective hat, and embark on this thrilling coding adventure. The secret password awaits! 💼🔍🌟

