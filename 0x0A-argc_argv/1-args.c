#include <stdio.h>
/**
 * main - Write a program that prints the number of arguments passed into it
 *
 * @args: Is the argument count
 * @argv: Is the argument vector
 *
 * Return: This return to 0
 *
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

