#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a list
 *
 * @head: The address of the pointer to the first element of the list
 * @n: The number to store in the new element
 *
 * Return: A pointer to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;  /* Declare a new node*/
    dlistint_t *l;    /* Declare a temporary pointer for traversal*/

    new = malloc(sizeof(dlistint_t));  /* Allocate memory for the new node*/
    if (new == NULL)
    {
        return (NULL);  /* Return NULL if memory allocation fails*/
    }
    new->n = n;         /*Set the data of the new node to the given value*/
    new->next = NULL;   /*Initialize the next pointer of the new node as NULL*/

    if (*head == NULL)  /* Check if the list is empty*/
    {
        *head = new;     /*If empty, set the new node as the head*/
        new->prev = NULL;  /*Set the previous pointer of the new node to NULL*/
        return (new);    /* Return a pointer to the new element*/
    }

    l = *head;   /* Initialize the temporary pointer to the head of the list*/
    while (l->next != NULL)
    {
        l = l->next;    /* Traverse the list until the last node is reached*/
    }
    l->next = new;   /*Set the next pointer of the last node to the new node*/
    new->prev = l;  /*Set the previous pointer of the new node to last node*/
    return (new);    /* Return a pointer to the new element*/
}
