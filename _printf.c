#include "main.h"
/**
 * _printf - Print all data type
 * @format: string to get the data type
 * Return: 0 on success.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int counter = 0;
	int (*f)(va_list);
	const char *p;

	if (!format)
		return (-1);

	va_start(ap, format);
	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			counter++;
			continue;
		}
		else
		{
			++p;
			f = get_specifier(p);
			counter += f(ap);
		}
	}
	va_end(ap);
	return (counter);
}
