#include <stdio.h>
/**
  *main - compilation begins from main
  *Description: 'Print all possible different combinations of two digits'
  *Return: Always 0
  */
int main(void)
{
	int n, m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (n == m && m > n)
			{
				putchar(n);
				putchar(m);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
