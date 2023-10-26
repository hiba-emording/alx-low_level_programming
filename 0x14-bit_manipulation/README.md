## STARTED WITH C
### PROJECT NUMBER 20

# 0x14. C - Bit manipulation

* In this project, I delved into the world of bit manipulation in C. Bit manipulation involves performing operations on individual bits within binary representations of data. This is a fundamental concept in low-level programming, where fine-grained control over data is required.

## Task 0: Binary to Unsigned Int 🧮
- **File:** `0-binary_to_uint.c`
- **Description:** In this task, I implemented a function that converts a binary number, represented as a string of '0' and '1' characters, into an unsigned integer. If there are non-binary characters or if the string is NULL, the function returns 0.
- **Fun Fact:** The binary number system is the foundation of digital computing. Understanding how to convert binary to decimal (and vice versa) is crucial for working with low-level data.

## Task 1: Print Binary 📇
- **File:** `1-print_binary.c`
- **Description:** This task required writing a function to print the binary representation of a given unsigned long integer. The challenge was to print this representation without using arrays, malloc, or any division/modulus operators.
- **Fun Fact:** Computers store data in binary format. Printing the binary representation allows you to peek into the digital "brain" of a computer.

## Task 2: Get Bit 🔍
- **File:** `2-get_bit.c`
- **Description:** In this task, I implemented a function to get the value of a specific bit at a given index in an unsigned long integer. The function returns the value of the bit or -1 in case of errors.
- **Fun Fact:** Bitwise operations are fundamental in low-level programming. Extracting specific bits is a common task when working with hardware registers.

## Task 3: Set Bit 🛠️
- **File:** `3-set_bit.c`
- **Description:** This task involved writing a function to set the value of a bit at a given index to 1 in an unsigned long integer. The function returns 1 if successful or -1 if an error occurs.
- **Fun Fact:** Setting a bit can be thought of as enabling a feature or flag in a binary representation, a common operation in systems programming.

## Task 4: Clear Bit 🧹
- **File:** `4-clear_bit.c`
- **Description:** In this task, I implemented a function to clear the value of a bit at a given index, setting it to 0 in an unsigned long integer. The function returns 1 if successful or -1 if an error occurs.
- **Fun Fact:** Clearing a bit is often used to disable specific settings or flags in binary data, making it a vital operation in programming.

## Task 5: Flip Bits 🔁
- **File:** `5-flip_bits.c`
- **Description:** This task required writing a function to count the number of bits that need to be flipped in one unsigned long integer to make it equal to another. This is done without using division or modulus operators.
- **Fun Fact:** Counting the number of bits to flip, also known as the Hamming distance, is crucial in error correction, cryptography, and data transmission.

## Task 6: Endianness 🖥️
- **File:** `100-get_endianness.c`
- **Description:** In this task, I implemented a function to check the endianness of the system, returning 0 for big endian and 1 for little endian.
- **Fun Fact:** Endianness affects how data is stored in memory. It's essential for data transmission and low-level programming, as it determines how bytes are ordered in memory.

### Explanation for Endianness:
Endianness refers to the byte order in which data is stored in memory. There are two common types:
* Big Endian: The most significant byte is stored at the lowest memory address (left-to-right).
* Little Endian: The least significant byte is stored at the lowest memory address (right-to-left).
* Endianness matters when transferring data between different computer architectures, and it's crucial in binary file formats and network protocols.

## Task 7: Crackme3 🔐
- **File:** `101-password`
- **Description:** In this task, the goal was to find the password for a given program and save it in a file named "101-password."
- **Fun Fact:** Cracking a password often involves analyzing binary data and code. This task provides a glimpse into the world of reverse engineering.

### Downloading a File from a GitHub Repository

You can use the following command to download a file from a GitHub repository. This command is particularly useful when you want to fetch a specific file from a repository.

```bash
curl <GitHub Raw File URL> -o <Output File>
```

* < GitHub Raw File URL >: Replace this with the URL of the raw file you want to download from the GitHub repository. Ensure that the URL points directly to the file's content.
* < Output File >: Specify the name you want for the downloaded file.

~ Example - How to use:

```bash
curl https://raw.githubusercontent.com/username/repository/main/path/to/file.txt -o downloaded_file.txt
```

> These tasks explore the fascinating world of bit manipulation, where every bit counts, and provide insights into the binary foundation of computing. Understanding binary operations is essential for low-level programming and working with embedded systems.

