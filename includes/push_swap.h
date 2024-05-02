#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_list
{
	int			n;
	struct s_list	*next;
}	t_list;

int     is_correct(char *s);
int     is_sorted(char **argv);
int     ft_atoi(char *s);
int	has_duplicates(char **argv, int len);

size_t  ft_strlen(char *s);

void	initialize_sorting(char **argv, int len);

#endif
