#include "main.h"
/**
 * _isalpha - The entry point
 * @c: The int to be checked
 * Return: returns 1
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
