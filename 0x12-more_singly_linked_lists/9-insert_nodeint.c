


/**
 *
 *
 *
 **/
listint *foo[2] break_in_2(list_t *head unsigned int idx)
{
	list_t *foo[2];
	list_t *tmp;
	int i, j;

	foo[0] = tmp = head;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	if (i < idx)
		return NULL;
	tmp = head;
	for (j = 1; j < idx; j++)
		tmp = tmp->next;
	foo[1] = tmp->next;
	temp = NULL;
	return(foo);
}

/**
 *
 *
 *
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

if (idx = 0)
	/* insert at beginning */
/* if idx > size_of_list THEN bail */
	return NULL;
/* if idx = size_of_list THEN insert at tail */
	return (whatever)
/* break_in_two */
/* insert at tail of foo[0] */
/*join (list1, list2) */
}

