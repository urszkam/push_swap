#include "../includes/push_swap.h"

int is_sorted(char **argv)
{
	int	prev;
	int	curr;
	int	i;
	
	i = 0;
	prev = atoi(argv[i]);
	while (argv[++i])
	{
		curr = atoi(argv[i]);
		if (prev > curr)
			return (0);
		prev = curr;
	}
	return (1);
}