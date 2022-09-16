#include "main.h"
/**
 * print_last_digit - Entry point
 * @num: Numbe
 * Return: 1
 */
int print_last_digit(int num)
{
	num = num % 10;
	if (num < 0)
		num = num * -1;
	_putchar(num + '0');
	return (num);
}
