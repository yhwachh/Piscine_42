/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:35:55 by ibalbako          #+#    #+#             */
/*   Updated: 2021/11/30 15:35:01 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_str(int ac, char **av)
{
	int	k;
	int	j;

	k = 1;
	while (k < ac)
	{
		j = 0;
		while (av[k][j])
		{
			ft_putchar(av[k][j]);
			j++;
		}
		ft_putchar('\n');
		k++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*coppie;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				coppie = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = coppie;
				i = 0;
			}
			i++;
		}
		ft_str(argc, argv);
	}
	return (0);
}
