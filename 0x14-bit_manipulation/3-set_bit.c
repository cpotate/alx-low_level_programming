#include "main.h"

/**
 * set_bit - Set value of a bit at a given index to 1
 * @n: Pointer to bit.
 * @index: Index to set the value at 1
 *
 * Return: If there is any error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
