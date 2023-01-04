#include "monty.h"

#define EXIT_FAILURE 1

/**
 * swap_func - swaps the top two elements of the stack
 * @stack: stack of elements
 * @line: line number of the command
 *
 * Return: void
 */

void swap(int *stack, int size)
{
	if (size < 2)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	int temp = stack[size - 1];
	stack[size - 1] = stack[size - 2];
	stack[size - 2] = temp;
}
