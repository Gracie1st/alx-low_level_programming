#include <stdio.h>

/**
 *  main - The entry point of the program
 * Return: outps program result type, int
 */


int main(void)

{
	char start;

	for (start = 'a'; start <= 'z'; start++)
	{

		if (start == 'q' || start == 'e')
		{

			continue;
		}
		putchar(start);
	}
	putchar('\n');
	return (0);
}
