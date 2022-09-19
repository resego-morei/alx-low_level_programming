#include <stdio.h>
#include <time.h>
#include <stdlib>

/**
 * main -  program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: 0
 */

int main()
{
	int psswrd, total = 0;

	srand(time(NULL));

	while (sum <= 56748)
	{
		psswrd = rand() % 528;
		total = total + psswrd;
		printf("%c", psswrd);
	}
	printf("%c", 10001 - total);

	return (0);
}
