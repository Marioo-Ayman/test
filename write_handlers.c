#include "main.h"

/**
 * handle_write_char - Prints a string
 * @c: char types.
 * @buffer: Buffer array to handle print
 * Return: Number of chars printed.
 */
int handle_write_char(char c, char buffer[])
{
	c = NULL;

	return (write(1, &buffer[0], 1));
}
