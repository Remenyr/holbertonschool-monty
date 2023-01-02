#include "monty.h"

#define EXIT_FAILURE 1
/**
 * stack is an array that represents the stack.
 * stack_ptr is a pointer to an integer that represents the stack pointer. The stack pointer points to the top element of the stack.
 * line_number is an integer that represents the line number where the opcode was encountered.
 */
// This function should be called when the pint opcode is encountered

void pint(int *stack, int *stack_ptr, int line_number)
{

	if (*stack_ptr < 1) {
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", stack[*stack_ptr - 1]);
}
