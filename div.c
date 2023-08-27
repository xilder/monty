#include "monty.h"
/**
 * f_div - saves the result of the division of the
 * second element by the first element in the second element
 * the second node and pops the first node
 * @head: beginnning of the list
 * @counter: line number
 */
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = tmp->n;
	j = tmp->next->n;
	tmp->next->n = j / i;
	*head = tmp->next;
	free(tmp);
}
