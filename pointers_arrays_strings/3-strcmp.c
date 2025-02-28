#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Negative value if s1 < s2, 0 if s1 == s2, Positive value if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
