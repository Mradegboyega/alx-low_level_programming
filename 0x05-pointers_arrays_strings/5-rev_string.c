#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: A pointer to the string to be reversed.
 *
 * Description: This function reverses the characters in the null-terminated
 * string pointed to by @s, making the reversal in-place.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	/* Reverse the string in-place */
	while (start < end)
	{
		/* Swap characters at start and end positions */
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move the pointers toward each other */
		start++;
		end--;
	}
}
