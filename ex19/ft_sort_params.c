
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;	

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_putendl(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		ft_putchar(s[i++]);
	ft_putchar('\n');
}

void	disp(char **av)
{
	int		i;

	i = 1;
	while (av[i])
		ft_putendl(av[i++]);	
}

int		main(int ac, char **av)
{
	int		i;
	int		j;

	(void)ac;
	i = 1;
	while (av[i])
	{
		j = i + 1;	
		while (av[j])
		{
			if (ft_strcmp(av[i], av[j]) > 0)
				ft_swap(&av[i], &av[j]);
			j++;
		}
		i++;
	}
	disp(av);
	return (0);
}
