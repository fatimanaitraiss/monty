#include "monty.h"

/**
 * get_pall - Prints all elements on the stack
 * @stack: Pointer to the head of the stack
 * @line_number: Line number where the instruction appears
 * Description:  push, pall
 * Return:
 * 1. upon success, null
 * 2. upon failure, EXIT_FAILURE
 */

void get_pall(stack_t **stack, unsigned int line_number)
{
stack_t *current;

(void)line_number;

current = *stack;

while (current != NULL)
{
printf("%d", current->n);
current = current->next;
printf("\n");
}
}
