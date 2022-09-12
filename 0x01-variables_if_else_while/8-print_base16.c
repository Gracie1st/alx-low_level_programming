#include <stdio.h>

/**
 * main - The entry point of the program
  * Return: outputs int result
  */



int main(void)
{
	unsigned int start = 0;
	char alpha = 'a';

	while (start < 10)
	{
		putchar('0' + start);
		start++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
