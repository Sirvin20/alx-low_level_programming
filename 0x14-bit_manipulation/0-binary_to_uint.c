#include "main.h"

/**
 * binary_to_uint - this converts a binary number to an unsigned int
 * @b: rep binary number
 * Return: returns converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (val = 0; *b; b++)
	{
		if (*b == '1')
			val = (val << 1) | 1;
		else if (*b == '0')
			val <<= 1;
		else
			break;
	}
	return (val);
}
