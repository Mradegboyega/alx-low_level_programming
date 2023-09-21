#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;
	int should_capitalize = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			should_capitalize = 1;
		}
		else if (should_capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			should_capitalize = 0;
		}
		else
		{
			should_capitalize = 0;
		}
	}

	return (str);
}

