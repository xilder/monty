#include "monty.h"
/**
 * add_queue - adds a node to the end of the queue
 * @head: pointer to the head of the list
 * @n: value to be added
 */
void add_queue(stack_t **head, int n)
{
	stack_t *temp, *new_node;

	new_node = malloc(sizeof(stack_t));
	temp = *head;
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	while(temp->next)
		temp = temp->next;

	temp->next = new_node;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = temp;
}
