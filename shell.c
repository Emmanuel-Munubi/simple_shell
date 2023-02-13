#include "shell.h"

/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int true = 1;
	size_t BUFFSIZE = 100;
	char *readBuff = malloc(BUFFSIZE);
	char *__exit = "exit";

	memset(readBuff, '\0', BUFFSIZE);

	while (true)
	{
		prompt(readBuff, BUFFSIZE);
		/*parse the buffer*/
		/*execute the command*/
	}
	printf("readBuff: %s\n", readBuff);
	return (0);
}

/**
 * prompt - prints a prompt and reads a line
 * @readBuff: buffer to read into
 * @buffer: size of buffer
 */
void prompt(char *readBuff, size_t buffer)
{
	printf("$ ");
	getline(&readBuff, &buffer, stdin);
}
