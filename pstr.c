#include "monty.h"
/**
 ** f_pstr - function that prints every element
 ** of the stack as a char if it is ascii char for an alphabet
 ** @head: double head pointer to the stack
 ** @counter: line count
 **
 ** Return: nothing
 **/
void f_pstr(stack_t **head, unsigned int counter)
{
	int n;
	stack_t *tmp = *head;

	while (tmp != NULL)
	{
		n = tmp->n;
		if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
			printf("%c", n);
		else
		{
			(void) counter;
			printf("\n");
			fclose(drive.file);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		tmp = tmp->next;
	}
	printf("\n");
}
