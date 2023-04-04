/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to head node
 *
 * Return: head node's data (n), or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
