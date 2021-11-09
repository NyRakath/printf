#include "main.h"

/**
 * powfake - represent power of the number
 * @num: Base number
 * @powe: Power number
 * Return: recursion of the funtion * num
 */
int powfake(int num, int powe)
{
	if (powe <= 0)
		return (1);
	else
		return (num * powfake(num, powe - 1));
}
/**
 * specifier_d - Convert the argument into integers.
 * @ap: Pointer to the list of arguments to print.
 * Return: 0 on success.
 */
int specifier_d(va_list ap)
{
	int last_digit, reversedn, first_number, savenumb, a, size = 0;
	int n = va_arg(ap, int);
	int i = 0;

	savenumb = n;
	if (n < 0)
	{
		size += _putchar('-');
		last_digit = ('0' - (n % 10));
		n /= -10;
	}
	else
	{
		last_digit = ((n % 10) + '0');
		n /= 10;
	}
	for (reversedn = 0; n > 0; i++)
	{
		reversedn = ((reversedn * 10) + (n % 10));
		n /= 10;
		if (n <= 9)
		{
			first_number = reversedn;
		}
	}
	for (; reversedn > 0;)
	{
		int d = ((reversedn % 10) + '0');

		size += _putchar(d);
		reversedn /= 10;
	}
	_putchar(last_digit);
	if (first_number == (savenumb / powfake(10, i)))
	{
		for (a = 0; a <= i - 2; a++)
			size += _putchar('0');
	}
	return (savenumb);
}
/**
 * specifier_i - Convert the argument into integers.
 * @ap: Pointer to the list of arguments to print.
 * Return: 0 on success.
 */
int specifier_i(va_list ap)
{
	int size = 0;

	size = specifier_d(ap);
	return (size);
}
