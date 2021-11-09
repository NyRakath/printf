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

	if (format == NULL ||
	    (*(format) == '%' && *(format + 1) == '\0'))
		return (-1);

	va_start(ap, format);
	for (p = format; *p && format; p++)
	{
		if (*p != '%')
		{
			_putchar(*p), counter++;
			continue;
		}
		else
		{
			if (*(p + 1) == '%')
			{
				_putchar(*p), p++, counter++;
				continue;
			}
			else
			{
				f = get_specifier(++p);
				if (f == NULL)
				{
					_putchar('%'), _putchar(*p), counter++;
					continue;
				}
				counter += f(ap);
			}
		}
	}
	va_end(ap);
	return (counter);
}
