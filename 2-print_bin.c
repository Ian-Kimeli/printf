#include "main.c"

/* Author: Ian-Kimeli */

/**
 * print_bin - converts int arg to binary
 * @val: arguments
 *
 * Return: integer
 */
int print_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int j;
	unsigned int num = va_arg(val, unsigned int);

	for (j = 31; j >= 0; j--)
	{
		if ((num >> j) & 1)
		{
			flag = 1;
			_putchar('1');
			cont++;
		}
		else if (flag)
		{
			_putchar('0');
			cont++;
		}
	}
	if (cont == 0)
	{
		_putchar('0');
		cont++;
	}
	return (cont);
}
