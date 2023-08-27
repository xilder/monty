#include "monty.h"

/**
 * f_push - pushes onto a stack
 * @head: pointer to the beginning of the list
 * @counter: value to be added
 */

void f_push(stack_t **head, unsigned int counter)
{
	int flag = 0, i = 0, value;

	if (!drive.arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (drive.arg[0] == 45)
		i++;
	for (; drive.arg[i] != 0; i++)
	{
		if (drive.arg[i] > 57 || drive.arg[i] < 48)
			flag = 1;
	}
	if (flag == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	value = atoi(drive.arg);
	if (drive.sq == 0)
		add_stack(head, value);
	else
		add_queue(head, value);
}
