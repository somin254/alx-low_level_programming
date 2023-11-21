#include <unistd.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        char buffer[16];
        int len = sprintf(buffer, "%d\n", h->n);
        write(STDOUT_FILENO, buffer, len);
        h = h->next;
        count++;
    }

    return (count);
}
