#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * of a list_t linked list
 * @head : pointer to the head of the linked list
 * Return: the head node's data (n)or 0
 * if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	if (temp == NULL)
		return (0);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
