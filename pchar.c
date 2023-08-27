#include "monty.h"
/**
 ** f_pchar - function that prints the top of
 ** the stack if it is ascii char for an alphabet
 ** @head: double head pointer to the stack
 ** @counter: line count
 **
 ** Return: nothing
 **/
void f_pchar(stack_t **head, unsigned int counter)
{
	int n;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);

	}
	n = (*head)->n;
	if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
		printf("%c\n", n);
	else
	{
		fprintf(stderr, "L%i: can't pchar, value out of range", counter);
		fclose(drive.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}
