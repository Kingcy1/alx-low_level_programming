#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c
 * @c: Character to print
 * Return: 1 (success)
 * error, -1 is returned
 */
int _putchar(char c)

	return(write(1, &c, 1));
