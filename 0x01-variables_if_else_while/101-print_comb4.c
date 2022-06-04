#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, t, b;

	for (n = 48; n < 58; n++)
	{
		for (t = 49; t < 58; t++)
		{
			for (b = 50; b < 58; b++)
			{
				if (b > t && t > n)
				{
					putchar(n);
					putchar(t);
					putchar(b);
					if (n != 55 || t != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
