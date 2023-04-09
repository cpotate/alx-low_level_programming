#include "main.h"

/**
 * get_bit - Return value of a bit at a given index.
 * @n: Bit.
 * @index: Index to get the value. 
 *
 * Return: If there is any error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
