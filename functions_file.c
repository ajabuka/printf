#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @c: string passed as argument
 * Return: return length of string
 */

int _strlen(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
 * print_hexa - converts from base 10 to 16
 * @num: unsigned int
 * @form: lowercase or uppercase
 * Return: num of characters
 */

int print_hexa(unsigned int num, int form)
{
	long int i, j, k, remainder;
	unsigned int val;
	char *ptr;

	val = num;

	if (num == 0)
		return (_putchar('0'));
	i = 0;
	while (val > 0)
	{
		val /= 16;
		i++;
	}
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (-1);
	for (j = 0; j < i; j++)
	{
		remainder = num % 16;
		if (remainder < 10)
			ptr[j] = remainder + 48;
		else
			ptr[j] = remainder - 10 + form;
		num /= 16;
	}
	for (k = j - 1; k >= 0; k--)
		_putchar(ptr[k]);
	free(ptr);
	return (i);
}

/**
 * _puts - prints string to the stdout
 * @str: the string to be displayed
 * Return: returns nothing
 */

void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		_putchar(str[len]);
}

/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	/*declare variables to be used in loops and also to hold characters*/
	int count, i, len = _strlen(s);
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (0);
	for (count = 0; *(s + count) != '\0'; count++)
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(ptr + count) = rot13[i];
				break;
			}
			*(ptr + count) = *(s + count);
		}
	}
	*(ptr + count) = '\0';

	return (ptr);
}
