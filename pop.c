#include "monty.h"
/**
 ** f_pop - function that prints the top of the stack
 ** @head: double head pointer to the stack
 ** @counter: line count
 **
 ** Return: nothing
 **/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *tmp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	*head = tmp->next;
	free(tmp);
}
