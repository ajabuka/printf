#include "main.h"

/**
 * use_hex - changes from base 10 to base 16 (lowercase)
 * @arg: holds the value to be displayed
 * Return: length of char numbers
 */

int use_hex(va_list arg)
{
	int count;
	unsigned int decimal = va_arg(arg, int);

	count = print_hexa(decimal, 'a');
	return (count);
}

/**
 * use_HEX - changes from base 10 to base 16 (uppercase)
 * @arg: holds the value to be displayed
 * Return: length of char numbers
 */

int use_HEX(va_list arg)
{
	int count;
	unsigned int decimal = va_arg(arg, int);

	count = print_hexa(decimal, 'A');
	return (count);
}

/**
 * use_S - print strings and hexa
 * @arg: holds the value to be displayed
 * Return: length of char numbers
 */

int use_S(va_list arg)
{
	char *s;
	int i, j = 0, sum;

	s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";
	else if (*s == '\0')
		return (-1);
	for (i = 0; s[i]; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || (s[i] >= 127))
		{
			_putchar(92);
			_putchar('x');
			j += 2;
			if (s[i] < 16)
				_putchar('0');
			print_hexa(s[i], 'A');
			j += 1;
		}
		else
			_putchar(s[i]);
	}
	sum = i + j;
	return (sum);

}

/**
 * use_p - prints pointer address
 * @arg: holds the value to be displayed
 * Return: length of char numbers
 */

int use_p(va_list arg)
{
	int i = 0, j, k, size, remainder, sig_zero = 0;
	char *ptr;
	void *pt = va_arg(arg, void *);
	uintptr_t new = (uintptr_t)pt; /* typecasting */

	if (pt == NULL)
	{
		_puts("(nil)");
		return (5);
	}
	size = sizeof(uintptr_t) * 2;/*max size of pointer address*/
	_puts("0x");
	i += 2;

	ptr = malloc(size);
	if (ptr == NULL)
		return (-1);

	for (j = 0; j < size; new /= 16, j++)
	{
		remainder = new % 16;
		if (remainder < 10)
			ptr[j] = remainder + 48;
		else
			ptr[j] = remainder - 10 + 'a';
	}

	for (k = j - 1; k >= 0; k--)
		if (ptr[k] != '0' || sig_zero)
		{
			_putchar(ptr[k]);
			i++;
			if (ptr[k] != '0')
				sig_zero = 1;
			else
				sig_zero = sig_zero;
		}
	free(ptr);
	return (i);
}
