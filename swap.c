#include "monty.h"
/**
 * f_swap - swaps the top values in the stack
 * @head: pointer to the head of the list
 * @counter: line number
 */
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int i;

	tmp = *head;
	if (tmp == NULL || tmp->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = i;
}
