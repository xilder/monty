#include "monty.h"
/**
 * add_stack - adds a node to a stack
 * @head: pointer to the head of the list
 * @n: value to be added
 */
void add_stack(stack_t **head, int n)
{
	stack_t *temp, *new_node;

	new_node = malloc(sizeof(stack_t));
	temp = *head;
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (temp)
		temp->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
