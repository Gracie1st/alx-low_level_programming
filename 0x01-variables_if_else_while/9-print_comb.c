#include <stdio.h>

/**
  * main - The entry point of the program
  * Return: outputs result, int
  */



int main(void)

{
	unsigned int start;

	for (start = 10; start < 20; start++)
	{
		putchar((start % 10) + '0');
		if (start != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
