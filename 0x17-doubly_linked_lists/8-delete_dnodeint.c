#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
if (head == NULL || *head == NULL)
{
return (-1);
}

dlistint_t *current = *head;
unsigned int current_idx = 0;

while (current != NULL && current_idx < index)
{
current = current->next;
current_idx++;
}

if (current == NULL)
{
return (-1);
}

if (current->prev != NULL)
{
current->prev->next = current->next;
}
else
{
*head = current->next;
}

if (current->next != NULL)
{
current->next->prev = current->prev;
}

free(current);
return (1);
}
