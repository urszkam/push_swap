#include "../includes/push_swap.h"

void    clean_stacks(int *stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
}

int	*populate_stack(char **argv, int len)
{
	int	*stack;
	int	i;
	
	stack = (int *) malloc(len * sizeof(int));
	if (!stack)
		return (0);
	i = 0;
	while (i < len)
		stack[i] = atoi(argv[i++]);
	return (stack);
}

void	initialize_sorting(char **argv, int len)
{
	int	*stack_a;
	int	*stack_b;

	stack_a = populate_stack(argv, len);
	stack_b = (int *) malloc(len * sizeof(int));
	if (!stack_a || stack_b)
	{
		clean_stacks(stack_a, stack_b);
		return (printf("Error\n"));
	}

	//do something

	clean_stacks(stack_a, stack_b);
}