#include "main.h"

/**
 * cap_string - capitalizes every word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int count, sepcount;

	char sep[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	count = 0;

	while (s[count] != '\0')
	{
		if (count == 0 && s[count] >= 97 && s[count] <= 122)
		{
			s[count] = s[count] - 32;
		}
		for (sepcount = 0; sepcount < 13; sepcount++)
		{
			if (s[count] == sep[sepcount])
			{
				if (s[count + 1] >= 97 && s[count + 1] <= 122)
				{
					s[count + 1] = s[count + 1] - 32;
				}
			}
		}
		count++;
	}
	return (s);
}
