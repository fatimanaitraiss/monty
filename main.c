#include "monty.h"

int i=1;

/**
 * main - Entry point of the program.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
stack_t *head;
(void)(argc), (void)(argv);

head = NULL;
check_args(argc);
file_mode(argv[1], &head);
free_dlistint(&head);
return (0);
}
