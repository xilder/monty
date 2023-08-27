#include "monty.h"
/**
 * f_mul - saves the multiplication of the first two nodes in
 * the second node and pops the first node
 * @head: beginnning of the list
 * @counter: line number
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int i, j, length = 0;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	i = tmp->n;
	j = tmp->next->n;
	tmp->next->n = i * j;
	*head = tmp->next;
	free(tmp);
}
