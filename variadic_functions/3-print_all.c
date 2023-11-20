#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 * @format: The list of types of arguments passed to the function.
 *          'c' for char, 'i' for integer, 'f' for float, 's' for char *.
 *          If the string is NULL, print "(nil)" instead.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str = NULL;
	int num = 0;
	float fnum = 0.0;
	char c = '\0';

	va_list args;
	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			if (format[i] == 'c')
			{
				c = (char)va_arg(args, int);
				printf("%c", c);
			}

			if (format[i] == 'i')
			{
				num = va_arg(args, int);
				printf("%d", num);
			}

			if (format[i] == 'f')
			{
				fnum = (float)va_arg(args, double);
				printf("%f", fnum);
			}

			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");

				else
					printf("%s", str);
			}

			if (format[i + 1] != '\0')
					printf(", ");
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
