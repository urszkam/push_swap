#include "../includes/push_swap.h"

void    rra(t_list **stack)
{
    t_list *last;

    if (!stack || !*stack || !(*stack)->next)
        return;
    last = *stack;
    while (last->next)
        last = last->next;
    if (last->prev)
        last->prev->next = NULL;
    last->prev = NULL;
    last->next = *stack;
    (*stack)->prev = last;
    *stack = last;
}
