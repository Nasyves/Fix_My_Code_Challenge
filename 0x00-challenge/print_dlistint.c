#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list of integers
 *
 * @h: A pointer to the first element of the list
 *
 * Return: The number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t n; /*Initialize a variable to count the number of elements printed*/

    n = 0;  /* Initialize the count to 0*/
    while (h)
    {
        printf("%d\n", h->n);  /* Print the value of the current node*/
        h = h->next;           /* Move to the next node in the list*/
        n++;                   /* Increment the count of printed elements*/
    }
    return (n);  /*Return the total number of elements printed*/
}
