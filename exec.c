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
				{"push", f_push}, {"pall", f_pall},
				{"pint", f_pint}, {"pop", f_pop},
				{"swap", f_swap}, {"add", f_add},
				{"nop", f_nop}, {"sub", f_sub},
				{"div", f_div}, {"mul", f_mul},
				{"mod", f_mod}, {"pchar", f_pchar},
				{"pstr", f_pstr}, {"rotl", f_rotl},
				{"rotr", f_rotr}, {"stack", f_stack},
				{"queue", f_queue}, {NULL, NULL}
				};
	int i = 0;

	drive.op = strtok(str, " \n\t");
	if (drive.op == NULL)
		return (0);
	drive.arg = strtok(NULL, " \n\t");
	if (drive.op[0] == '#')
		return (0);
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
