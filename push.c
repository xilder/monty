#include "monty.h"

/**
 * f_push_stack - pushes onto a stack
 * @head: pointer to the beginning of the list
 * @counter: value to be added
 */

void f_push(stack_t **head, unsigned int counter)
{
	int flag = 0, i = 0, value;

	if (!drive.arg)
	{
		fprintf(stderr, "L%d: Usage: push <int>", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	for (; drive.arg[i] != 0; i++)
	{
		if (drive.arg[i] > 57 || drive.arg[i] < 48)
			flag = 1;
	}
	if (flag == 1)
	{
		fprintf(stderr, "L%d: not an int\nUsage: push <int>", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	value = atoi(drive.arg);
	add_stack(head, value);
}
