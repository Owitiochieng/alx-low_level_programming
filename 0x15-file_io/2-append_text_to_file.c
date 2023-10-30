#include "main.h"

/**
 * append_text_to_file - This func adds text at the end of a file
 * @filename: This input represents name of the file
 * @text_content: The information to be added
 * Return: 1 else return -1 upon failure or nonexistence of the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_des;
	int ncontent;
	int ret_val;

	if (!filename)
		return (-1);

	f_des = open(filename, O_WRONLY | O_APPEND);

	if (f_des == -1)
		return (-1);

	if (text_content)
	{
		for (ncontent = 0; text_content[nletters]; ncontent++)
			;

		ret_val = write(f_des, text_content, ncontent);

		if (ret_val == -1)
			return (-1);
	}

	close(f_des);

	return (1);
}
