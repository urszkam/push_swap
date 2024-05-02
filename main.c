#include "../includes/push_swap.h"

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
			initialize_sorting(argv, --argc);
	}
	return (0);
}