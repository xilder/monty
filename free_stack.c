#include "monty.h"

/**
 * free_stack - function that frees a doubly linked list
 * @head: head pointer to the stack
 **/
void free_stack(stack_t *head)
{
	stack_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
