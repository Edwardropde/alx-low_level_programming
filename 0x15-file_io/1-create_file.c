#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - Create a file
 * @filename: Pointer to name of file to create
 * @text_content: Pointerto string to be included in file
 * Return: -1 if function fails and 1 if otherwise
 */

int create_file(const char *filename, char *text_content)
{

	int fd;
	ssize_t bytes_written;
	mode_t file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, file_mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, (ssize_t)strlen(text_content));
		if (bytes_written == -1 || bytes_written != (ssize_t)strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
