#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[]);
};

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;


int _printf(char *str, ...);
char * _itoa(int i, char *strout, int base);
char *_strrev (char *str);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[]);

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int print_char(va_list types, char buffer[]);
int print_string(va_list types, char buffer[]);
int print_percent(va_list types, char buffer[]);

/* Functions to print numbers */
int print_int(va_list types, char buffer[]);

int handle_write_char(char c, char buffer[]);
int write_number(int is_positive, int ind, char buffer[]);
int write_num(int ind, char bff[], char extra_c);

#endif
