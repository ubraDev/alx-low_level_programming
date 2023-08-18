#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of the list
 * Return: nothing
 **/

void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *next_node;

while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}
}
