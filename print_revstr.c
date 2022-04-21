#include "main.h"

/**
 * print_revstr - writes the str in reverse
 * @arguments: input string
 * Return: length of string
 */

int print_revstr(va_list arg)
{
	char *s;
	int i, len;

	s = va_arg(arg, char *);
	len = _strlen(s);

	if (s == NULL)
		s = "(null)";
	else if (*s == '\0')
		return (-1);
	for (i = len - 1; i >= 0 ; i--)
		_putchar(s[i]);

	return (len);
}
