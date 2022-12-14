#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
*
* @filename: name of file to append text into
* @text_content: text to append to file
*
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int nf;

	nf = open(filename, O_RDWR | O_APPEND);

	if (nf == -1)
	{
		return (-1);
	}
	else
	{
		if (text_content != NULL)
		{
			int ln = strlen(text_content);

			write(nf, text_content, ln);
		}
	}

	return (1);
}
