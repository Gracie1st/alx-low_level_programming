#include <stdio.h>

/**
 * main - The entry point of the program
 *  Return: outputs results in the specified type
 */
int main(void)
{
	char small_a;
	char big_a;


	small_a = 'a';
	big_a = 'A';
	while (small_a <= 'z')
	{
		putchar(small_a);
		small_a++;
	}
		while (big_a <= 'Z')
		{
			putchar(big_a);
			big_a++;
		}

	putchar('\n');
	return (0);
}
