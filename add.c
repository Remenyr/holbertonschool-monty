#include "monty.h"

#define EXIT_FAILURE 1

/**
 * add_func - adds the top two elements of the stack
 * @stack: stack
 * @line: line number of the command
 *
 * Return: void
 */

void add(int *stack, int *size)
{
	if (*size < 2)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack[*size - 2] += stack[*size - 1];
	(*size)--;
}
