#include "../includes/push_swap.h"

int	is_integer(char *s)
{
	int		digits;
	char	*limit;
	
	if (*s == '-')
		limit = "2147483648";
	else
		limit = "2147483647";
	if (*s == '-' || *s == '+')
		s++;
	digits = ft_strlen(s);
	if (digits != 10)
		return (digits < 10);
	while (*s)
	{
		if (*s != *limit)
			return (*s < *limit);
		s++;
		limit++;
	}
	return (1);
}

int	is_number(char *s)
{
	int	i;
	
	i = 0;
	if ((s[i] == '+' || s[i] == '-') && s[i + 1])
		i++;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
	
}

int	is_correct(char *s)
{
	if (is_number(s) && is_integer(s))
		return (1);
	return (0);
}