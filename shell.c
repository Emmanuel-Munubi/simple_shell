#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void prompt(char *readBuff, size_t buffer);

int main() {
	int true = 1;
	size_t BUFFSIZE = 100;
	char *readBuff = malloc(BUFFSIZE);
	memset(readBuff, '\0', BUFFSIZE);
	char *exit = "exit";

	while(true) {
		prompt(readBuff, BUFFSIZE);
		if (strcmp(readBuff, exit) == 0) {
			break;
		}
		printf("readBuff: %s\n", readBuff);
	}
	printf("readBuff: %s\n", readBuff);
	return (0);
}

void prompt(char *readBuff, size_t buffer) {
	printf("$ ");
	getline(&readBuff, &buffer, stdin);
}
