# STARTED WITH C
## FIRST PROJECT

*Used betty coding style and documentation*

**0. Preprocessor**
A script that runs a C file through the preprocessor and save the result into another file.
* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c
```
#!/bin/bash
gcc -E $CFILE > c
```

**1. Compiler**
A script that compiles a C file but does not link.
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c
```
#!/bin/bash
gcc -c "$CFILE" -o "${CFILE%.c}.o"
```

**2. Assembler**
A script that generates the assembly code of a C code and save it in an output file.
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s instead of .c
```
#!/bin/bash
gcc -S "$CFILE" -o "${CFILE%.c}.s"
```

**3. Name**
A script that compiles a C file and creates an executable named cisfun.
* The C file name will be saved in the variable $CFILE
```
#!/bin/bash
gcc "$CFILE" -o cisfun
```

**4. Hello, puts**
A C program that prints exactly <sup> "Programming is like building a multilingual puzzle </sup>, followed by a new line.
* Use the function puts
* The program should end with the value 0
```
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program use puts function to print a message and return 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    /* Using puts function to print */
puts("\"Programming is like building a multilingual puzzle");
    /* Return: Always 0 (Success) */
return (0);
}

```

**5. Hello, printf**
A C program that prints exactly <sup> with proper grammar, but the outcome is a piece of art,</sup>, followed by a new line.
* Use the function printf
* The program should return 0
* The program should compile without warning when using the -Wall gcc option
```
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: This program use printf function to print a text and return 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    /* Using printf function to print */
printf("with proper grammar, but the outcome is a piece of art,\n");
    /* Return: Always 0 (Success) */
return (0);
}

```

**6. Size is not grandeur, and territory does not make a nation**
A  C program that prints the size of various types on the computer it is compiled and run on.
* The program should return 0.
```
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: This program prints the sizes of various types in computer.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));

return (0);
}

```

**7. Intel**
A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s instead of .c
```
#!/bin/bash
gcc -S -masm=intel "$CFILE" -o "${CFILE%.c}.s"
```

**8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity**
A C program that prints exactly <sup> and that piece of art is useful" - Dora Korpar, 2015-10-19 </sup>, followed by a new line, to the standard error.
* Not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
*used other different libraries: unistd.h - string.h*
* The program should return 1
* The program should compile without any warnings when using the -Wall gcc option
```
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point of the program.
 *
 * Description: A program uses write to print a message and return 1.
 *
 * Return: the integer value 1 indicates the program finished with an error.
 */

int main(void)
{
	/* Using write function to print */
const char *quote =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write((1), quote, strlen(quote));
	/* Return: Always 1 (error) */
return (1);
}

```

