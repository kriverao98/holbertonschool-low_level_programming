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
	char *str;
	int num;
	float fnum;
	char c;

	va_list args;
	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;

			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;

			case 'f':
				fnum = (float)va_arg(args, double);
				printf("%f", fnum);
				break;

			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");

				else
					printf("%s", str);
				break;

			default:
				break;
		}

		if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");

		i++;
	}

	va_end(args);
	printf("\n");
}
