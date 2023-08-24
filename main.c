#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include "monty.h"
#include <stdlib.h>

/**
 * main- function for the monty code interpreter
 * @argc: number of argument passed
 * @argv: array of arguments passed
 * Return: ???
 */
drive_t drive = {NULL, NULL, NULL, NULL, 0};
int main(int argc, char *argv[])
{
	FILE *file;
	stack_t *stack = NULL;
	char monty_line[128];
	int counter = 0;

	file = fopen(argv[1], "r");
	if (argc != 2)
		printf("FILE USAGE: monty file");
	if (file == NULL)
		printf("Unable to open file: %s\n", argv[1]);
	else
	{
		drive.file = file;
		while (fgets(monty_line, 128, file) != NULL)
		{
			counter++;
			exec(monty_line, &stack, counter, file);
		}

	}
	printf("\n");
	fclose(file);
	return (0);
}
