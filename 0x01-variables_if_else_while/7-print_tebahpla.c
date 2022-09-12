#include <stdio.h>

/**
 * main - The entry point of the program
 *  Return: Outputs int result
 */



int main(void)

{
	char start = 'z';

	while (start >= 'a')
	{
		putchar(start);
		start--;
	}
	putchar('\n');

	return (0);
}
