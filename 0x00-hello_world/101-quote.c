# include <stdio.h>
# include <unistd.h>
/**
 * main- write a c program that prints string
 * do not use any function from man print(3) and man put(3)
 * Return: always (1)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
