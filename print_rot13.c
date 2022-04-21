#include "main.h"

/**
 * print_rot13 - prints rot13'ed string
 * @arg: argument passed
 * Return: length of string
 */

int print_rot13(va_list arg)
{
	int i;
	char *str = va_arg(arg, char *), *new;

	if (str == NULL)
	{
		_puts("(null)");
		return (6);
	}
	else if (*str == '\0')
		return (-1);
	new = rot13(str);

	for (i = 0; new[i] != '\0'; i++)
		_putchar(new[i]);

	free(new);
	return (i);
}
