#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to char (a string).
 * @to: Pointer to the char value to set.
 */

void set_string(char **s, char *to)
{
*s = to;
}
