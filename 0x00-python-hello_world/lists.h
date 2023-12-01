#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
/**
*struct listint_s - singly
*@n: integer
*@next: points
*Description: singly*/
typede struct listint_t
{
int n;
struct listint_t *next;
}
listint_t *add_nodeint(listint_t (**head, const int n);
void free_listint(listint_t *head);
int check_cyela(listint_t *list);
#endif /* LISTS_H */
