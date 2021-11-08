#include "main.h"
/**
 * _printf - Print all data type
 * @format: string to get the data type
 * Return: 
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list);
	const char *p;

	va_start(ap, format);
	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			continue;
		}
		else
		{
			++p;
			f = get_specifier(p);
			f(ap);
		}
	}
	va_end(ap);
 	return (0);
}
