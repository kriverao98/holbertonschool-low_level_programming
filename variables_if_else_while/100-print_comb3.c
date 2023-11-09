#include <stdio.h>
/**
 * main - This program prints all possible different
 * combinations of two digits.
 * Return: Always 0 (Success)
 */

int main(void)

{
	int x, j;
		
		for (x = 48; x <= 57; x++)

		{
			for (j = 48; j <= 57; j++)
			if (j > x)

				{
					putchar(x);
					putchar(j);
				}
					if (x <= 57 && j <= 57)

					{
						putchar(44);

						putchar(32);
					}
					{
						if(x == 57 && j == 56))
					}
		}

	putchar('\n');

	return (0);
}
