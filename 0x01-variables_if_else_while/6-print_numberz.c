#include <stdio.h>

/**
 * main - The entry point
 * Return: outputs result int
 */



int main(void)

{
	int start = 0;

	while (start < 10)
	{
		putchar('0' + start);
		start++;
	}
	putchar('\n');
	return (0);
}
