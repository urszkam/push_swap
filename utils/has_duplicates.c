int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s1[i] == '+')
		i++;
	if (s2[j] == '+')
		j++;
	while (s1[i] == s2[j] && s1[i] && s2[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

int	has_duplicates(char **argv, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
