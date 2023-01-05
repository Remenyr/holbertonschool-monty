#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @sstack: linear data structure
 * @line: unused attribute
 *
 * Return: void
 */

void pall(stack_t **sstack, unsigned int __attribute__((unused)) line)
{
	int index = 0;
	stack_t *current;

	current = *sstack;

	while (current)
	{
		if (current != NULL)
			printf("%d\n", current->n);
		index++;
		current = current->next;
	}
}
