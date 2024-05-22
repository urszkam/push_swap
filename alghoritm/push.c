#include "../includes/push_swap.h"

void    pa(t_list **stack1, t_list **stack2) 
{
    t_list *top2;

    if (!stack2 || !*stack2)
        return;
    top2 = *stack2;
    *stack2 = top2->next;
    if (*stack2)
        (*stack2)->prev = NULL;
    top2->next = *stack1;
    if (*stack1)
        (*stack1)->prev = top2;
    top2->prev = NULL;
    *stack1 = top2;
}
