# STARTED WITH C
## My Second Project
### 0x01. C - Variables, if, else, while



**Variables in C:**

* Variables are like containers that store data.
* They can hold different types of information, such as numbers or text.
* You give variables names to refer to them in your program.


**If-Else Statements in C:**

* If-else statements help your program make decisions.
* They allow your program to choose different actions based on conditions.


**While Loops in C:**

* Let you repeat a set of instructions as long as a condition is true.
* They are like a "do this while that's true" kind of instruction.
* Useful for tasks like counting or repeating an action until a goal is met.

### Scripts:

*Used betty coding style and documentation*


**0. Positive anything is better than negative nothing**
This program will assign a random number to the variable n each time it is executed. Print whether the number stored in the variable n is positive or negative.
* The variable n will store a different value every time you will run this program
* The output of the program should be:
> The number, followed by:
	* if the number is greater than 0: is positive
	* if the number is 0: is zero
	* if the number is less than 0: is negative
> followed by a new line
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number, checks sign, and prints the result.
 * Return: Always 0 to indicate success.
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}

```

**1. The last digit**
This program will assign a random number to the variable n each time it is executed. Print the last digit of the number stored in the variable n.
* The variable n will store a different value every time you will run this program
* The output of the program should be:
> The string Last digit of, followed by:
> n, followed by
> The string is, followed by:
	* if the last digit of n is greater than 5: the string and is greater than 5
	* if the last digit of n is 0: the string and is 0
	* if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
> followed by a new line
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number, extracts its last digit,
 * and prints information about the last digit.
 * Return: Always 0 to indicate success.
 */

int main(void)
{
int n;
int LD;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* LD is last digit */

LD = n % 10;

printf("Last digit of %d is %d", n, LD);

if (LD > 5)
{
printf(" and is greater than 5\n");
}
else if (LD == 0)
{
printf(" and is 0\n");
}
else
{
printf(" and is less than 6 and not 0\n");
}

return (0);
}

```

**2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
A program that prints the alphabet in lowercase, followed by a new line.
* Only use the putchar function - Twice maximum
* All code should be in the main function
```
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the lowercase alphabet followed by a newline
 * using only two putchar calls.
 *
 * Return: Always 0 to indicate success.
  */


int main(void)

{

char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);

}

```

**3. alphABET**
A program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
* Only use the putchar function - Three times maximum
* All code should be in the main function
```
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the lowercase alphabet,
 * followed by the uppercase alphabet,
 * and then a newline character.
 *Using the `putchar` function only three times.
 *
 * Return: Always 0 to indicate success.
 */

int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n');

return (0);

}

```

**4. When I was having that alphabet soup, I never thought that it would pay off**
A program that prints the alphabet in lowercase, followed by a new line.
* Print all the letters except q and e
* Only use the putchar function - Twice maximum
* All code should be in the main function
```
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *This program prints the lowercase alphabet,
 *excluding 'e' and 'q',
 * followed by a newline,
 *using the `putchar` function only twice.
 *
 * Return: Always 0 to indicate success.
 */

int main(void)
{

char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{

putchar(letter);
}
letter++;
}

putchar('\n');

return (0);
}

```

**5. Numbers**
A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
* All code should be in the main function
```
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all single-digit numbers of base 10,
 * starting from 0 and followed by a new line.
 *
 * Return: Always 0 to indicate success.
 */

int main(void)

{

int number = 0;

while (number <= 9)
{
printf("%d", number);
number++;
}

printf("\n");

return (0);

}

```

**6. Numberz**
A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
* Not allowed to use any variable of type char
* Only use the putchar function - Twice maximum
* All code should be in the main function
```
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all single-digit numbers of base 10,
 * starting from 0 and followed by a new line.
 * Using putcher function only twice.
 *
 * Return: Always 0 to indicate success.
 */
int main(void)

{

int digit = '0';

while (digit <= '9')
{
putchar(digit);
digit++;
}

putchar('\n');

return (0);
}

```

**7. Smile in the mirror**
A program that prints the lowercase alphabet in reverse, followed by a new line.
* Only use the putchar function - Twice maximum
* All code should be in the main function
```
#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints the lowercase alphabet in reverse,
* followed by a new line,
* using only two putchar calls.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{

char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}

putchar('\n');

return (0);

}

```

**8. Hexadecimal**
A program that prints all the numbers of base 16 in lowercase, followed by a new line.
* Only use the putchar function - Three times maximum
* All code should be in the main function
```
#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints all the numbers of base 16 in lowercase,
* followed by a new line, using only three putchar calls.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{

char digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}

for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}

putchar('\n');

return (0);

}

```

**9. Patience, persistence and perspiration make an unbeatable combination for success**
A program that prints all possible combinations of single-digit numbers.
* Numbers must be separated by (,), followed by a space
* Numbers should be printed in ascending order
* Not allowed to use any variable of type char
* Only use the putchar function - Four times maximum
* All code should be in the main function
```
#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints all the single-digit numbers separated by a comma
* and a space, in ascending order.
* Using putchar only four times.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{

/* N stands for the number */
int N;

/* counting from zero for ascending order */
for (N = 0; N <= 9; N++)
{

/* Converting it to its representation */
putchar(N + '0');

/* if its not the last number add comma and space */
if (N != 9)
{
putchar(',');
putchar(' ');
}

}

/* to be followed by newline */
putchar('\n');

return (0);

}

```

**10. Inventing is a combination of brains and materials. The more brains you use, the less material you need**
A program that prints all possible different combinations of two digits.
* Numbers must be separated by (,), followed by a space
* The two digits must be different
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order, with two digits
* Not allowed to use any variable of type char
* Only use the putchar function - Five times maximum
* All code should be in the main function
```
#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints all possible different combinations of two digits,
* separated by a comma and a space, in ascending order.
* Using putchar only 5 times.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{

/* Declaring variables */
int digit1, digit2;

/* outer loop from 0 to 8 to ensure ascending order */
for (digit1 = 0; digit1 <= 8; digit1++)
{

/* inner loop from 0 to 9 to ensure ascending order */
/* digit2 starts +1 to ensure diffrencies */
for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
{

/* converting to to their character representation */
putchar(digit1 + '0');
putchar(digit2 + '0');

/* if its not the last combination 89 print comma and space */
if (digit1 != 8 || digit2 != 9)
{
putchar(',');
putchar(' ');
}

}

}

putchar('\n');

return (0);

}

```

**11. The success combination in business is: Do what you do better... and: do more of what you do...**
A program that prints all possible different combinations of three digits.
* Numbers must be separated by (,), followed by a space
* The three digits must be different
* Print only the smallest combination of three digits
* Numbers should be printed in ascending order, with three digits
* Not allowed to use any variable of type char
* Only use the putchar function - Six times maximum
* All code should be in the main function
```
#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints all possible different combinations of three digits,
* separated by ,, followed by a space, in ascending order.
* Using putchar only 6 times.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{
/* declare variables */
int digit1, digit2, digit3;

/* 3 nested for loops starts from zero to ensure ascending order */
/* +1 to ensure difference */
for (digit1 = 0; digit1 <= 7; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
{
for (digit3 = digit2 + 1; digit3 <= 9; digit3++)

/* convert to their character representation */
{
putchar(digit1 + '0');
putchar(digit2 + '0');
putchar(digit3 + '0');

/* if its the last number add add a comma and space */
if (digit1 != 7 || digit2 != 8 || digit3 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}

/* Print a newline */
putchar('\n');

return (0);

}

```

**12. Software is eating the World**
A program that prints all possible combinations of two two-digit numbers.
* The numbers should range from 0 to 99
* The two numbers should be separated by a space
* All numbers should be printed with two digits. 1 should be printed as 01
* The combination of numbers must be separated by comma, followed by a space
* The combinations of numbers should be printed in ascending order
* Not allowed to use any variable of type char
* Only use the putchar function - Eight times maximum
* All code should be in the main function
```
#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints all possible combinations of two two-digit numbers,
* separated by a comma and a space, in ascending order.
* Using putchar only 8 times.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{

/* N1 and N2 stands for two digits numbers */
int N1, N2;

/* 2 nested for loops starts from zero to ensure ascending order */
for (N1 = 0; N1 <= 99; N1++)

/* N2 starts from N1+1 to ensure difference */
{
for (N2 = N1 + 1; N2 <= 99; N2++)
{

/* Print the current combination of two-digit numbers */
/* Seperated by space */
putchar(N1 / 10 + '0');
putchar(N1 % 10 + '0');
putchar(' ');
putchar(N2 / 10 + '0');
putchar(N2 % 10 + '0');

/* if it's not the last combination add a comma and space */
if (N1 != 98 || N2 != 99)
{
putchar(',');
putchar(' ');
}
}

}

/* Print a newline */
putchar('\n');

return (0);

}

```

