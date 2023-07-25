#include "main.h"

/**
 * print_from_to - fghj
 * @start: erty
 * @stop: dfghj
 * @except: dfghj
 * Return: dfghj
 */
int print_from_to(char *start, char *stop, char *except)
{
	int sum = 0;

	while (start <= stop)
	{
		if (start != except)
			sum += _putchar(*start);
		start++;
	}
	return (sum);
}

/**
 * print_rev - dfgh
 * @ap: tyu
 * @params: dfgh
 * Return: cvbn
 */
int print_rev(va_list ap, params_t *params)
{
	int len, sum = 0;
	char *str = var_arg(ap, char*);
	(void)params;

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str--)
			sum += _putchar(*str);
	}
	return (sum);
}

/**
 * print_rot13 - dfghj
 * @ap: tyuio
 * @params: tyui
 * Return: tyui
 */
int print_rot13(va_list ap, params_t *params)
{
	int i, index;
	int count = 0;
	char arr[] = "ABCDE     edcba";
}
