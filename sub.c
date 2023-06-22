#include "monty.h"

/**
 * _sub - function subtracts the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: the line number appears
i * Description: 6. sub
 * Return: see below
 * 1. upon success, null
 * 2. upon fail, EXIT_FAILURE
 */

void _sub(stack_t **stack, unsigned int line_number)
{
stack_t *first, *second;

if ((*stack == NULL) || ((*stack)->next == NULL))
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
fclose(file);
get_free(*stack);
exit(EXIT_FAILURE);
}
else
{
first = *stack;
second = first->next;
second->n -= first->n;
*stack = second;
(*stack)->prev = NULL;
free(first);
}
}
