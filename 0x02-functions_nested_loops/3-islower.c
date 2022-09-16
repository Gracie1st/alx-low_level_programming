#include "main.h"
/**
 * _islower - entry point
 * @c: The number to be checked
 * Return: returns 1 on success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
