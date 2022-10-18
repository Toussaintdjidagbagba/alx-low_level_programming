#include "main.h"

/**
 * _isalpha - Code entry.
 *
 * Description: A function that checks for alphabetic character.
 *
 * @c: The integer value it recieves
 *
 * Return: 0
 */
int _isalpha(int c)
{
	char minalpha, maxalpha;

	for (minalpha = 'a'; minalpha <= 'z'; minalpha++)
	{
		for (maxalpha = 'A'; maxalpha <= 'Z'; maxalpha++)
		{
			if ((minalpha == c) || (maxalpha == c))
			{
				return (1);
			}
		}
	}
	return (0);
}