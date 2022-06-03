#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, e;

	c = 48;
	e = 48;

	while (e < 58)
	{
		c = 48;
		while (c < 58)
		{
			if (e != c && e < c)
			{
				putchar(e);
				putchar(c);
				if (c == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
