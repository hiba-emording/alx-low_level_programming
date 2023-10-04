#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    int len1 = 0, len2 = 0, i, j;

    /* Handle NULL strings as empty strings */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate the lengths of s1 and s2 */
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    /* Allocate memory for the concatenated string */
    concatenated = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

    if (concatenated == NULL)
        return (NULL);

    /* Copy the contents of s1 to concatenated */
    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    /* Copy the contents of s2 to concatenated */
    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    /* Null-terminate the concatenated string */
    concatenated[i + j] = '\0';

    return (concatenated);
}
