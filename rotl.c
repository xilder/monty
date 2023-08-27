#include "monty.h"
/**
 * f_rotl- makes the top element the last one
 * @head: beginning of the stack
 * @counter: line counter
 */
void f_rotl(stack_t **head, unsigned int counter)
{
	stack_t *tmp, *lst;
	(void) counter;

	tmp = *head;
	lst = *head;
	if (tmp == NULL)
		return;
	while (lst->next)
	{
		lst = lst->next;
	}

	*head = (*head)->next;
	(*head)->prev = NULL;
	lst->next = tmp;
	tmp->prev = lst;
	tmp->next = NULL;
}
