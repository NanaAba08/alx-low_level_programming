#include <stdio.h>
/**
  *main - Entry
  *Description: 'Print all possible combinations of two two digit numbers'
  *Return: Always 0
  */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			int d1 = i / 10, d2 = i % 10;
			int d3 = j / 10, d4 = j % 10;

			putchar(d1 + '0');
			putchar(d2 + '0');
			putchar(' ');
			putchar(d3 + '0');
			putchar(d4 + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
