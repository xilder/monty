#include "monty.h"
/**
 * f_rotr - makes the last element the top one
 * @head: beginning of the stack
 * @counter: line counter
 */
void f_rotr(stack_t **head, unsigned int counter)
{
	stack_t *lst, *tmp;
	(void) counter;

	lst = *head;
	if (lst == NULL)
		return;
	while (lst->next->next)
	{
		lst = lst->next;
	}
	tmp = lst->next;
	lst->next = NULL;
	tmp->next = *head;
	(*head)->prev = tmp;
	*head = tmp;
}

