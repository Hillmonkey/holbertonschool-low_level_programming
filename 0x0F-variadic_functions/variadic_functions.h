#ifndef VARIADIC_H
#define VARIADIC_H

/**
 * struct pf - Struct p(rint) f(ormat)
 * @fmt: single char string (but could be longer) specifying something similar
 *       to printf formatting
 * @f: function associated with "printf" format flag
 **/
typedef struct pf
{
	char *fmt;
	char *(*f)()
} pa;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_H */
