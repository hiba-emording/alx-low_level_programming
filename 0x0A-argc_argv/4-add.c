#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
int sum = 0;
int current_num, arg_index, char_index;
char current_char;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (arg_index = 1; arg_index < argc; arg_index++)
{
for (char_index = 0; argv[arg_index][char_index] != '\0'; char_index++)
{
current_char = argv[arg_index][char_index];
if (current_char < '0' || current_char > '9')
{
printf("Error\n");
return (1);
}
}
current_num = atoi(argv[arg_index]);
if (current_num > 0)
{
sum += current_num;
}
}
printf("%d\n", sum);
return (0);
}
