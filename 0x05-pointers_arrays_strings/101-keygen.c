#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[12]; /* Assuming a maximum password length of 11 characters */
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;

	srand(time(NULL)); /* Seed the random number generator */

	for (i = 0; i < 11; i++)
	{
		int index = rand() % (sizeof(charset) - 1); /* Generate a random index */
		password[i] = charset[index]; /* Get a character from the charset */
	}

	password[i] = '\0'; /* Null-terminate the password */

	printf("Generated Password: %s\n", password);

	return (0);
}
