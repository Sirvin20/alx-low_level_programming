#include "main.h"

/**
 * flip_bits - this counts the number of bits to change
 * @n: reps the firts num
 * @m: reps the second num
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = e >> i;
		if (c & 1)
			count++;
	}
	return (count);
}
