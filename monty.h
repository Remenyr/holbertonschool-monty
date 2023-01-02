#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
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

typedef struct stack
{
	int n;
	struct stack *prev;
	struct stack *next;
} stack;

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
	void (*f)(stack **stack, unsigned int line_number);
} instruction_t;

void pint(int *stack, int *stack_ptr, int line_number);
void pop(int *stack, int *stack_ptr, int line_number);
void get_func(char *opcode, stack_t **cp_stack, unsigned int line);

#endif
