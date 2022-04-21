#include "main.h"

/**
 * count_arg - count and print the specifer arg.
 * @chr: character
 * @arg: va_list
 * Return: number of characters printed minus the \0
 */

int count_arg(char chr, va_list arg)
{
	/*initializing struct*/
	chr_st _char[] = {
		{"c", use_c},
		{"s", use_s},
		{"i", use_i},
		{"d", use_i},
		{"u", use_u},
		{"b", use_b},
		{"o", use_o},
		{"x", use_hex},
		{"X", use_HEX},
		{"S", use_S},
		{"p", use_p},
		{"r", print_revstr},
		{"R", print_rot13},
		{NULL, NULL}
	};
	int j;

	/* for loop to loop through the struct array */
	for (j = 0; _char[j].str != NULL; j++)
	{
		if (chr == *(_char[j].str))
			return (_char[j].f(arg));
	}
	return (0);
}
