#include "monty.h"

/**
 * get_mod - function finds the modulus of top two elements
 * @stack: pointer to the top of the stack
 * @line_number: Line number where the operation is performed
 * Return:
 * 1. upon success, null
 * 2. upon failure, EXIT_FAILURE
 */

void get_mod(stack_t **stack, unsigned int line_number)
{
stack_t *first, *second;

if ((*stack == NULL) || ((*stack)->next == NULL))
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
fclose(file);
get_free(*stack);
exit(EXIT_FAILURE);
}
else if ((*stack)->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
fclose(file);
get_free(*stack);
exit(EXIT_FAILURE);
}
else
{
first = *stack;
second = first->next;
second->n %= first->n;
*stack = second;
(*stack)->prev = NULL;
free(first);
}
}
