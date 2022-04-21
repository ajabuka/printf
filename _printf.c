#include "main.h"
/**
 * _printf - produces output according to output
 * @format: argument
 * Return: res
 */
int _printf(const char *format, ...)
{
	int i, sum = 0, count = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			sum++;
			continue;
		}
		if (format[i + 1] == '%')
		{
		_putchar('%');
		sum++;
		i++;i
		continue;
		}
		while (format[i + 1] == ' ')
			i++;
		if (format[i + 1] == '\0')
			return (-1);

		count = count_arg(format[i + 1], arg);
		if (count == -1 || count != 0)
			i++;
		if (count > 0)
			sum += count;
		if (count == 0)
		{
			_putchar('%');
			sum++;
		}
	}
	va_end(arg);
	return (sum);
}
