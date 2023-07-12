#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s : String array (pointer?)
 *
 * Return: Always length [SUCCESS]
 */

int _strlen(const char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != 0)
	{
		length++;
		i++;
	}
	return (length);
}
