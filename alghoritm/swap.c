#include "../includes/push_swap.h"

void    swap(t_list **list, char c)
{
    t_list *first = *list;
    t_list *second = (*list)->next;

    if (list == NULL || first == NULL || second == NULL)
        return ;

    first->next = second->next;
    first->prev = second;
    second->next = first;
    second->prev = first->prev;
    if (second->next != NULL)
        second->next->prev = first;
    *list = second;
}