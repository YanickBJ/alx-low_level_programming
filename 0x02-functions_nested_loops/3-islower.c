#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: return 1 if 'c' is lowercase, 0 otherwise always (0)success.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
