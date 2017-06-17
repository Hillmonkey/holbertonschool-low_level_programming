#ifndef VAR_FUNC
#define VAR_FUNC
#include <stdio.h>
#include <stdarg.h>

/**
 * struct op - Struct op
 * @op: printf-like operator
 * @f: formatting function
 **/
typedef struct op
{
	char *op;
	void (*f)(va_list);
} op_t;

/* printf op functions */
void op_char(va_list);
void op_int(va_list);
void op_float(va_list);
void op_string(va_list);

/* other functions */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VAR_FUNC */
