#include "monty.h"
/**
 * f_sub - saves the subtraction of the first element
 * from the second element in the second element
 * the second node and pops the first node
 * @head: beginnning of the list
 * @counter: line number
 */
void f_sub(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	i = tmp->n;
	j = tmp->next->n;
	tmp->next->n = j - i;
	*head = tmp->next;
	free(tmp);
}
