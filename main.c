#include "../includes/push_swap.h"


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

void	sort(char **argv, int len)
{
	int	*stack_a;
	int	*stack_b;

	stack_a = populate_stack(argv, len);
	stack_b = (int *) malloc(len * sizeof(int));
	if (!stack_b)
	{
		clean_stack(stack, len);
		return (printf("Error\n"));
	}
	
	
	
	//clear_stacks(*stack_a, *stack_b);
}

int	main(int argc, char **argv)
{
	int	i;
	
	if (argc > 1)
	{
		i = 0;
		while (argv[++i])
		{
			if (!is_correct(argv[i])) 
			{
				printf("Error\n");
				return (1);
			}
		}
		argv++;
		if (!is_sorted(argv))
			sort(argv, --argc);
	}
	return (0);
}