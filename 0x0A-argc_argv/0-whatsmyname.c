#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the funcion name followed by a new line
 * @argc: number of command found in the comman line
 *  @argv: The array that contains the command line arguments
 * Return: 0 -Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
