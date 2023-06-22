#include "monty.h"

/**
 * calc - Arithmetic operations
 * This function calculates arithmetic operations using two operands and an operator
 * @op_f: Char pointer
 * @l: line
 * @stak: stack
 * Return: Result of the arithmetic operation
 */


void(*calc(char *op_f, unsigned int l, stack_t **stak))(stack_t**, unsigned int)
{
int count;

instruction_t operation[] = {
{"pall", _pall},
{"add", _add},
{"pint", _pint},
{"swap", _swap},
{"pop", _pop},
{"sub", _sub},
{"div", _div},
{"mul", _mul},
{"mod", _mod},
{"nop", _nop},
{"rotl", _rotl},
{"rotr", _rotr},
{"pchar", _pchar},
{"pstr", _pstr},
{NULL, NULL}
};

for (count = 0; operation[count].opcode != NULL; count++)
{
if (strcmp(operation[count].opcode, op_f) == 0)
{
return (operation[count].f);
}
}
fprintf(stderr, "L%u: unknown instruction %s\n", l, op_f);
fclose(file);
get_free(*stak);
exit(EXIT_FAILURE);
}
