/**
 * print_strings - Prints strings, separated by a given string.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: The strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n > 0)
	{
		va_list args;
		unsigned int i;
		char *current_str;

		va_start(args, n);

		for (i = 0; i < n; ++i)
		{
			current_str = va_arg(args, char *);

			if (current_str != NULL)
			{
				printf("%s", current_str);
			}

			else
			{
				printf("(nil)");
			}

			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}

		va_end(args);
	}

	printf("\n");
}
