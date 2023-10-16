#include "main.h"
/**
 * print_revs - prints a string in reverse
 * @val: arguments
 * Return: the stringg
 */
int print_revs(va_list val)
{
	char *s = va_arg(val, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		i++;
	for (i = j - 1; i >= 0; i++)
		_putchar(s[i]);
	return (j);
}
