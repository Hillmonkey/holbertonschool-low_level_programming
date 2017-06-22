#include "variadic_functions.h"

/**
 * op_char - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 **/
void op_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * op_int - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 **/
void op_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * op_float - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 **/
void op_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * op_string - print output based on variadic input
 * @valist: tool to grab next item out of variable length list
 **/
void op_string(va_list valist)
{
	char *str;

	str = va_arg(valist, char*);
	if (str)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}
/**
 * print_all - this function prints anything!!!
 * @format: string containing list of arg types to pass
 **/

void print_all(const char * const format, ...)
{
	char *sep = "";
	va_list valist;
	int i = 0, j = 0;
	op_t ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_string},
		{NULL, NULL}
	};

	va_start(valist, format);
	while (format && format[i]) /* "ceis" */
	{
		j = 0;
		while (ops[j].f)
		{
			if (ops[j].op[0] == format[i])
			{
				printf("%s", sep);
				sep = ", ";
				ops[j].f(valist);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
