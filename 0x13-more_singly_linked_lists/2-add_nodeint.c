#include "lists.h"

/**
 * add_nodeint - function that adds a node at
 * the beginning of a linked listint_t list
 * @head: pointer to the head of the list
 * @n: value of the node
 * Return: address of the new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
