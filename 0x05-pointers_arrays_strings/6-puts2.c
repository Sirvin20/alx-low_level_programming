#include "main.h"
#include <unistd.h>
/**
 * puts2 - A function that prints every other character of a string
 *
 * @str: pointer point to a char or string
 *
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
