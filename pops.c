#include "monty.h"

/**
 * get_pop - function pops the top element of the stack
 * @stack: pointer 2 the top of the stack
 * @line_number: the line of number appears
 * Description: 2. pop
 * Return: see below
 * 1. upon success, null
 * 2. upon fail, EXIT_FAILURE
 */
void get_pop(stack_t **stack, unsigned int line_number)
{
stack_t *first;

if ((*stack == NULL) || (stack == NULL))
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
fclose(file);
get_free(*stack);
exit(EXIT_FAILURE);
}
first = *stack;
*stack = (*stack)->next;
if (first->next)
{
first->next->prev = NULL;
}
free(first);
}
