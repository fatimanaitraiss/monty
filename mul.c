#include "monty.h"

/**
 * get_mul - multiply the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number where the operation is performed
 * Return:
 * 1. upon success, null
 * 2. upon failure, EXIT_FAILURE
 */

void get_mul(stack_t **stack, unsigned int line_number)
{
stack_t *first, *second;

if ((*stack == NULL) || ((*stack)->next == NULL))
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
fclose(file);
exit(EXIT_FAILURE);
}
else
{
first = *stack;
second = first->next;
second->n *= first->n;
*stack = second;
(*stack)->prev = NULL;
free(first);
}
}
