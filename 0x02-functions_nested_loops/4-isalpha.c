#include "main.h"

/**
 * _isalpha - Code entry.
 *
 * Description: A function that checks for alphabetic character.
 *
 * @i: The integer value it recieves
 *
 * Return: 0
 */
int _isalpha(int i)
{
	char minalpha, maxalpha;

	for (minalpha = 'a'; minalpha <= 'z'; minalpha++)
	{
		for (maxalpha = 'A'; maxalpha <= 'Z'; maxalpha++)
		{
			if ((minalpha == i) || (maxalpha == i))
			{
				return (1);
			}
		}
	}
	return (0);
}