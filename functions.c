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
return (handle_write_char(c, buffer, flags, width, precision, size));
}
