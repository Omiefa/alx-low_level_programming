# include <stdio.h>
/**
 * main: size of various types on the computer it is compiled and run on.
 * You should produce the exact same output as in the example
 * Warnings are allowed
 * install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
 * Return: always 0 if successful
 */
int main(void)
{
	char o;
	int p;
	long int q;
	long long int r;
	float s;

	printf("Size of a char: %lu bytes\n", sizeof(o));
	printf("Size of an int: %lu bytes\n", sizeof(p));
	printf("Size of a long int: %lu bytes\n", sizeof(q));
	printf("Size of a long long int: %lu bytes\n", sizeof(r));
	printf("Size of a float: %lu bytes\n", sizeof(s));

	return (0);
}
