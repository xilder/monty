#include "monty.h"
/**
 ** f_pint - function that prints the top of the stack
 ** @head: double head pointer to the stack
 ** @counter: line count
 **
 ** Return: nothing
 **/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);

	}
	printf("%d\n", (*head)->n);
}
