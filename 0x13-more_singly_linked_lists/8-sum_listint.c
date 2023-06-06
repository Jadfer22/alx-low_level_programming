#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * sum_listint - function that cals the sum of
 * all the data (n) of a list_t linked list
 * @head : pointer to the head of the list
 * Return: the sum of all the data (n),
 * or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
