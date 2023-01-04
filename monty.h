#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * struct stack - doubly linked list representation of a stack (or queue)
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
	void (*f)(stack **stack, unsigned int line_number);
} instruction_t;

void pint(int *stack, int *stack_ptr, int line_number);
void pop(int *stack, int *stack_ptr, int line_number);
void get_func(char *opcode, stack **cp_stack, unsigned int line);
void add(int *stack, int *size);
void nop(stack_t **stack, unsigned int line);
void swap(int *stack, int size);
void push(char *opcode, stack_t **top_stack, unsigned int line);
void pall(stack_t **sstack, unsigned int __attribute__((unused)) line);
int _isnumber(char *opcode);
void mem_free(stack_t *head);
void get_code(FILE *file, stack_t **tpstack);


#endif
