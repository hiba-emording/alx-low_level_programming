# STARTED WITH C
## My 7th poject
### 0x06. C - More pointers, arrays and strings


## Scripts:

### Task 0: String Concatenation (0-strcat.c)
- **Description:** This function magically combines two strings. It takes `src` and appends it to the end of `dest`, gracefully overwriting the terminating null byte (`\0`) in `dest`, and then adds a new terminating null byte. The result is a pointer to the merged string.
- **Fun Fact:** String concatenation is like creating a word puzzle. It's the first step in building longer messages from individual pieces. 🧩

### Task 1: String Concatenation with Limit (1-strncat.c)
- **Description:** Think of this function as a safe string merger. `_strncat` is similar to `_strcat`, but with a twist. It respects limits and will use at most `n` bytes from `src`. Plus, `src` doesn't need to be null-terminated if it contains `n` or more bytes. The result? A secure blend of strings, served with a pointer to the destination.
- **Fun Fact:** Secure string operations with limits are like safety belts for your data. They prevent overflows and ensure harmony in your code. 🚗🌐

### Task 2: String Copy with Limit (2-strncpy.c)
- **Description:** This function is your trusty string copier. It takes `src` and copies it to `dest`, but it stops after copying `n` characters or when it reaches the null terminator. It's like a copy machine with boundaries.
- **Fun Fact:** String copying with boundaries is essential for preserving data integrity and ensuring your strings stay within their allocated spaces. 📄🖨️

### Task 3: String Comparison (3-strcmp.c)
- **Description:** Ever wondered how to compare strings? Look no further! This function takes `s1` and `s2`, performs an epic showdown, and returns an integer that tells you their relationship. It's like the referee in a string boxing match!
- **Fun Fact:** String comparison is a common task in programming, used in sorting, searching, and data validation. It's like teaching your code to understand relationships between words. 💔❤️

### Task 4: Reverse Array (4-revarray.c)
- **Description:** Reverse, reverse! This function flips the content of an array of integers, turning it into a mirror image of its former self. It takes `a` and its size `n` as inputs and works its magic.
- **Fun Fact:** Array reversal is like flipping a pancake. It's a simple yet crucial operation used in many applications, from image processing to data analysis. 🥞🔁

### Task 5: Uppercase String (5-string_toupper.c)
- **Description:** Transform your lowercase woes into uppercase whoas! This function changes all lowercase letters in a string to their uppercase counterparts, making your text SHOUT!
- **Fun Fact:** String manipulation is an art. This function lets you unleash the power of uppercase letters, often used in text processing and formatting. 📢🔠

### Task 6: Capitalize Words (6-cap_string.c)
- **Description:** Prepare to give your words a grand entrance! This function capitalizes the first letter of each word in a string. It knows when to capitalize, thanks to separators like spaces, tabs, and more.
- **Fun Fact:** Proper capitalization is like dressing up your words for a fancy party. It's a common practice in title formatting and enhances text readability. 👑✨

### Task 7: Leet Speak (7-leet.c)
- **Description:** Turn your text into hacker-speak! This function encodes a string into "leet speak," replacing certain letters with numbers. It's like giving your text a secret code.
- **Fun Fact:** Leet speak is a playful language transformation, often used for humor or online gaming. Learning it is like joining a secret club. 🕵️‍♂️🤐

### Task 8: Rot13 Encoding (100-rot13.c)
- **Description:** Unlock the mysteries of ROT13! This function encodes a string using the ROT13 algorithm, where each letter is shifted 13 places in the alphabet. It's a fun way to protect text from prying eyes.
- **Fun Fact:** ROT13 is a classic encryption technique used for light obfuscation. It's like a secret language that's simple yet effective. 🤫🔓

### Task 9: Print Integer (101-print_number.c)
- **Description:** It's time to print numbers! This function prints an integer using only the `_putchar` function. It's a bit of a challenge but ensures you can display numbers without breaking a sweat.
- **Fun Fact:** Printing integers is an art. This function lets you showcase your numeric skills and precision in output formatting. 🖨️🔢

### Task 10: Magic Line (102-magic.c)
- **Description:** Add one line of code to this program to make it perform magic! You'll get to print `a[2] = 98` without using the variable `a`. It's like adding a twist to a classic trick.
- **Fun Fact:** Modifying code to achieve specific output demonstrates your problem-solving skills and coding creativity. It's like being a magician in the programming world. 🪄✨

### Task 11: Infinite Addition (103-infinite_add.c)
- **Description:** Get ready for number-crunching! This function adds two numbers represented as strings and stores the result in a buffer. It handles positive numbers, zero, and various edge cases with style.
- **Fun Fact:** Performing numeric operations with strings is essential for calculator programs and mathematical applications. It's like solving puzzles with numbers. 🧮🔢

### Task 12: Print Buffer (104-print_buffer.c)
- **Description:** Decode the binary! This function prints the content of a buffer in a structured format. It's like unveiling the hidden secrets of binary data, displayed in a user-friendly way.
- **Fun Fact:** Printing binary data in a human-readable format is a crucial skill for debugging, network analysis, and understanding file formats. It's like deciphering a code. 🧩🔍

