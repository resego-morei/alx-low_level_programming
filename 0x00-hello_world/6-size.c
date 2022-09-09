#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled and run on
 *
 * Description: using the main function
 * this program prints size of various types on computer
 * Return: 0
 */

int main(void)
{
	char ch;
	int integer;
	long long_variable;
	long long elong_var;
	float float_var;

	printf("Size of a char: %ld byte(s)\n", sizeof(ch));
	printf("Size of a int: %ld byte(s)\n", sizeof(integer));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long_variable));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(elong_var));
	printf("Size of a float: %ld byte(s)\n", sizeof(float_var));

	return (0);
}

