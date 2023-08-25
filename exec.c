#include "monty.h"
/**
 * exec - splits a string into an array
 * @str: the string to be passed
 * @stack: a pointer to the head of the stack
 * @counter: the line number
 * @file: pointer to the contents of the file
 * Return: 0 if it passes and 1 if it fails
 */
int exec(char *str, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push},
				{"pall", f_pall},
				{"pint", f_pint},
				{NULL, NULL}
				};
	int i = 0;

	drive.op = strtok(str, " \n\t");
	drive.arg = strtok(NULL, " \n\t");
	while (drive.op && opst[i].opcode != NULL)
	{
		if (strcmp(drive.op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, drive.op);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	return (1);
}
