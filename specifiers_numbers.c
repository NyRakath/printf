#include "main.h"

/**
 * _pow - Represent power of the number.
 * @num: Base number.
 * @powe: Power number.
 * Return: recursion of the funtion * num.
 */
int _pow(int num, int powe)
{
	if (powe <= 0)
		return (1);
	else
		return (num * _pow(num, powe - 1));
}
/**
 * specifier_d - Convert the argument into integers.
 * @ap: Pointer to the list of arguments to print.
 * Return: 0 on success.
 */
int specifier_d(va_list ap)
{
	int n = va_arg(ap, int);
	int i = 0, d = 0, a = 0, size = 0;
	int first_number = 0, last_digit = 0, reverse = 0, savenumb = 0;

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
	for (reverse = 0; n > 0; i++)
	{
		reverse = ((reverse * 10) + (n % 10));
		n /= 10;
		if (n <= 9)
			first_number = reverse;
	}
	for (; reverse > 0;)
	{
		d = ((reverse % 10) + '0');
		size += _putchar(d);
		reverse /= 10;
	}
	size += _putchar(last_digit);
	if (first_number == (savenumb / _pow(10, i)))
	{
		for (a = 0; a <= i - 2; a++)
			size += _putchar('0');
	}
	return (size);
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
