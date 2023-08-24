#include "monty.h"
/**
 * f_pall - prints all the values of the stack
 * @head: pointer to the head of the list
 * @number: the line number
 */
void f_pall(stack_t **head, unsigned int number)
{
	stack_t *tmp = *head;
	(void)number;

	if (tmp == NULL)
	{	
		return;
	}
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
