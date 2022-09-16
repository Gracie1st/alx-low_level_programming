#include "main.h"
/**
 * print_alphabet_x10 - displays alphabets
 * Return: alwaysp  0
 */

void print_alphabet_x10(void)

{
	char ah = 'a';
	int count = 0;

	while (count < 10)
	{
		while (ah <= 'z')
		{
			_putchar(ah);
			ah++;
		}
		_putchar('\n');
		ah = 'a';
		count = count + 1;
	}
}
