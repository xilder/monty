#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct drive_s - carries information concerning
 * each line of code in the monty file
 * @file: opens the file
 * @op: determines which function to use
 * @arg: stores the arguments on each line
 * @sq: switches from stack to queue and vice versa
 */
typedef struct drive_s
{
	FILE *file;
	char *op;
	char *arg;
	int sq;
} drive_t;
extern drive_t drive;
int exec(char *str, stack_t **stack, unsigned int counter, FILE *file);
void f_stack(stack_t **head, unsigned int counter);
void f_queue(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_pop(stack_t **head, unsigned int counter);
void f_push(stack_t **head, unsigned int counter);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int counter);
void add_stack(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void free_stack(stack_t *head);
#endif /* _MONTY_H_*/
