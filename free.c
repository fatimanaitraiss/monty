#include "monty.h"

/**
 *  get_free - Function to free the stack
 *  @stack: Pointer to the stack
 *  Return: Void
 *  Description: This function frees the memory allocated for the stack
 */


void get_free(stack_t *stack)
{
if (stack)
{
get_free(stack->next);
free(stack);
}
}
