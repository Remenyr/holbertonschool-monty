#include "monty.h"

/**
 * get_func - gets the function
 * @opcode: requested function
 * @cp_stack: linear data structure
 * @line: line number
 *
 * Return: function pointer or EXIT_FAILURE if it fails
 */

void get_func(char *opcode, stack **cp_stack, unsigned int line)
{
	int index = 0;

	instruction_t function[] = {
		{"pall", pall},
		{"pint",  pint},
		{"pop", pop},
		{NULL, NULL}
}
