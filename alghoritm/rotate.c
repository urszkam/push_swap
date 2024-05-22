#include "../includes/push_swap.h"

void    ra(t_list **stack)
{
    t_list  *top;
    t_list  *last;

    if (!stack || !*stack || !(*stack)->next)
        return;
    top = *stack;
    *stack = top->next;
    (*stack)->prev = NULL;
    last = *stack;
    while (last->next)
        last = last->next;
    last->next = top;
    top->prev = last;
    top->next = NULL;
}
