#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: The input string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *rot13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encoded = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*ptr)
	{
		char *ch = rot13;
		char *enc = encoded;
		int found = 0;

		while (*ch)
		{
			if (*ptr == *ch)
			{
				*ptr = *enc;
				found = 1;
				break;
			}
			ch++;
			enc++;
		}

		if (!found)
		{
			ptr++;
		}
		else
		{
			ptr++;
		}
	}

	return (str);
}

