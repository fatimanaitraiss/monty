#include "monty.h"

/**
 * get_add - function  adds the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: the line number appears
 * Return: null on success.
 * EXIT_FAILURE on failure.
 */
void get_add(stack_t **stack, unsigned int line_number)
{
stack_t *first, *second;

if ((*stack == NULL) || ((*stack)->next == NULL))
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
fclose(file);
free(*stack);
exit(EXIT_FAILURE);
}
else
{
first = *stack;
second = first->next;
second->n += first->n;
*stack = second;
(*stack)->prev = NULL;
free(first);
}
}
