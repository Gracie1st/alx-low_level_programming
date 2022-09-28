#include "main.h"
/**
 * _strpbrk - function locates the first occurrence in the string s
 * @s: string
 * @accept: byte
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept  + j))
				return (s + i);
		}
	}
	return ('\0');
}
