#include "main.h"
/**
 * _put - write a function that prints a string, followed by a new line, to
 * stdout.
 * @str: This is my input string
 */
void _put(char *str)
{
int index;
for (index = 0; str[index] != '\0'; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
