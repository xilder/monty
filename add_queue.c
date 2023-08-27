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
		printf("Error\n");
		fclose(drive.file);
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return;
	}
	while (temp->next != NULL)
		temp = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
}
