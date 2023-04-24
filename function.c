#include "main.h"

/**
 * print_char - Prints a char
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * Return: Number of chars printed
 */
int print_char(va_list types, char buffer[])
{
	char c = va_arg(types, int);

	return (handle_write_char(c , buffer));
}

/**
 * print_string - Prints a string
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * Return: Number of chars printed
 */
int print_string(va_list types, char buffer[])
{
	int length = 0;
	char *str = va_arg(types, char *);

	UNUSED(buffer);

	while (str[length] != '\0')
		length++;

	return (write(1, str, length));
}

/**
 * print_percent - Prints a percent sign
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * Return: Number of chars printed
 */
int print_percent(va_list types, char buffer[])
{
	UNUSED(types);
	UNUSED(buffer);
	return (write(1, "%%", 1));
}

/**
 * print_int - Print int
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * Return: Number of chars printed
 */
int print_int(va_list types, char buffer[])
{
	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	long int n = va_arg(types, long int);
	unsigned long int num;

	/*n = convert_size_number(n, size);*/

	if (n == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)n;

	if (n < 0)
	{
		num = (unsigned long int)((-1) * n);
		is_negative = 1;
	}

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_number(is_negative, i, buffer));
}
