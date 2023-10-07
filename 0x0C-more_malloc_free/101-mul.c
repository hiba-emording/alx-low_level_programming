#include <stdlib.h>
#include "main.h"

int is_digit(char *s);
int str_length(char *s);
void handle_errors(void);

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
char *num1_str, *num2_str;
int num1_len, num2_len, result_len, i, carry;
int digit1, digit2, *result, leading_zeros = 0;

if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
handle_errors();
}
num1_str = argv[1];
num2_str = argv[2];
num1_len = str_length(num1_str);
num2_len = str_length(num2_str);
result_len = num1_len + num2_len + 1;

result = malloc(sizeof(int) * result_len);

if (!result)
{
return (1);
}
for (i = 0; i <= num1_len + num2_len; i++)
{
result[i] = 0;
}
for (num1_len = num1_len - 1; num1_len >= 0; num1_len--)
{
digit1 = num1_str[num1_len] - '0';
carry = 0;
for (num2_len = str_length(num2_str) - 1; num2_len >= 0; num2_len--)
{
digit2 = num2_str[num2_len] - '0';
carry += result[num1_len + num2_len + 1] + (digit1 *digit2);
result[num1_len + num2_len + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
{
result[num1_len + num2_len + 1] += carry;
}
}
for (i = 0; i < result_len - 1; i++)
{
if (result[i])
{
leading_zeros = 1;
}
if (leading_zeros)
{
_putchar(result[i] + '0');
}
}
if (!leading_zeros)
{
_putchar('0');
}
_putchar('\n');
free(result);
return (0);
}

/**
 * is_digit - Checks if a string contains only digit characters.
 * @s: The string to be evaluated.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *s)
{
int i = 0;

while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * str_length - Calculates the length of a string.
 * @s: The string to evaluate.
 *
 * Return: The length of the string.
 */
int str_length(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}
return (length);
}

/**
 * handle_errors - Handles errors by printing an error message and exiting.
 */
void handle_errors(void)
{
char error_message[] = "Error\n";
int i = 0;

while (error_message[i] != '\0')
{
_putchar(error_message[i]);
i++;
}
exit(98);
}
