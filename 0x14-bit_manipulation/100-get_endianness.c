#include "main.h"

/**
 * get_endianness - Checks endianness.
 *
 * Return: If it is big then - 0.
 *         If it is little then - 1.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
