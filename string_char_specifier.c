#include "main.h"

/**
 * use_c - when format is character
 * @arg: argument
 * Return: 1 if there's character, -1 if not
 */

int use_c(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * use_s - when format is string
 * @arg: argument
 * Return: length
 */

int use_s(va_list arg)
{
	/*declare a char pointer*/
	char *s;
	int i;

	s = va_arg(arg, char *);

	if (s == NULL)/*if string is NULL*/
		s = "(null)";
	else if (*s == '\0')/*checking for empty string*/
		return (-1);
	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	return (i);
}
