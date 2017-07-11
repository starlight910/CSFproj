/*
 * Linked list implementation for positive integers.
 *
 * This assignment is meant to serve as a culmination of things learned
 * for C programming. You will implement a linked list data structure
 * with at least a push(), pop(), print(), and remove_by_value() functions.
 *
 * Additionally, you can implement a remove_last() function that removes and
 * returns the last value in the array, and a remove_by_index() function that
 * removes and returns a value based on an index.
 *
 * Please review the comments made in the program and write code for the TODOs
 * found in the comments.
 *
 * Score:
 */

#include <stdio.h>
#include <stdlib.h>

// Struct definition for building a linked list.
typedef struct node 
{
	int val;
	struct node * next;
} 

node_t;

/* TODO: Write an implementation for the push function:
 * -When this function is called, it add val to the END of the list.
 * Example:
 * If linked list is [0,1,2],
 * push(head, 3); would change the array to be [0,1,2,3].
 */
void push(node_t * head, int val) 
{
	node_t * new_node ;
	new_node = malloc(sizeof(node_t)) ;
	new_node->val = val ;
	new_node-> next = *head ;
	*head = new_node ;
}

/* TODO: Write an implementation for the pop function:
 * -When this function is called, it removes the first item in the list
 *  and returns the value of that item.
 *  Example:
 *  If linked list is [0,1,2,3],
 *  int temp = pop(&head); would remove the 0 from the list and store it into
 *  into the temp variable. Array would be changed to [1,2,3].
 *  
 *  Note: pop() return value does not have to be stored. A list can simply
 *  be popped and the first item in the list would be removed.
 */
int pop(node_t ** head) 
{
	int retval = -1 ;
	node_t * next_node = NULL ;

	if(*head ==NULL)
	{
		return -1 ;
	}

	next_node = (*head)->next ;
	retval = (*head)->val ;
	free(*head) ;
	*head = next_node ;

	return retval ;
}

/* TODO: Write an implementation for the remove by value function:
 * -When this function is called, it removes the first item that matches
 *  the value passed to this function and returns it.
 *  Example:
 *  If linked list is [0,1,2,3,2],
 *  int temp = remove_by_value(&head, 2); would remove the 2 from the list and
 *  store it into the temp variable. Array would be changed to [0,1,3,2].
 *
 */
int remove_by_value(node_t ** head, int val) 
{
	node_t *previous, *current ;
	
	if (*head == NULL)
	{
		return -1 ;
	}
	if((*head)->val == val)
	{
		return pop(head) ;
	}

	previous = current = (*head)->next ;
	while (current)
	{
		if (current->val == val)
		{
			previous->next = current->next ;
			free(current) ;
			return val ;
		}

		previous = current ;
		current = current->next ;
	}
	
	return -1 ;

}

/* TODO: Write an implementation that prints the list as it is. You can print it
 * however you like, but it should print all the values currently in the list.
 */
void print(node_t * head)
{
	node_t * current = head ;

	while (current != NULL)
	{
		printf("%d\n", current->val) ;
	}
	return;
}

/* 
 * Frees memory used for link list.
 */
void delete_list(node_t *head) 
{
	node_t * current = head,
        * next = head ;

	while(current) 
	{
		next = current->next ;
		free(current) ;
		current = next ;
	}

	return;

}

int main() 
{
	
  // Creates the head for the linked list.
  	node_t * head = malloc(sizeof(node_t));
  	int temp;

  // Sets 0 as first item in linked list.
  	head->val = 0;
  	head->next = NULL;

  // TODO: Push a 1 onto the list and then push a 2 onto the list.


  // TODO: Pop the list and store the result into a variable.


  // TODO: Print the list. It should be 1,2.


  // TODO: Push the popped variable onto the list twice.


  // TODO: Push 5 onto the list.


  // TODO: Print the list. It should be 1,2,0,0.


  // TODO: remove the first 0 from the list.


  // TODO: print list to make sure only 1 zero was removed.


  // TODO: If you implementented other functions, test them here.

  delete_list(head);

  return 0;
}
