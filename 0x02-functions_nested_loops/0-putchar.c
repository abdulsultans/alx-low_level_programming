#include <stdio.h>

/**
 * main - prints _putchar followed by a new line.
 *
 *Description: Prints "_putchar" followed by a new line
 * Return: Always returns 0 (Success)
 *
 */
int main(void)
{
	char word[] = "_putchar"; 
	int i;

	for (i = 0; word[i] != '\0'; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');

	return 0;
}
