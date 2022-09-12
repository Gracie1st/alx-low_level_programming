#include <stdio.h>

/**
 *  main - The entry point of the program
 *   Return: ouputs result which is int
 */

int main(void)

{
	char a_;

	a_ = 'a';

	while (a_ <= 'z')
{
		putchar(a_);
		a_++;
	}
	putchar('\n');
	return (0);
}
