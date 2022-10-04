/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:40:23 by ibalbako          #+#    #+#             */
/*   Updated: 2021/12/02 16:53:50 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strjoin(char **tab, int size, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = -1;
	k = 0;
	*str = malloc(sizeof(char) * 1000);
	while (tab[++i])
	{
		j = -2;
		while (tab[i][++j])
			str[k++] = tab[i][j];
		j = -1;
		while (sep[++j])
			str[k++] = sep[j];
	}
	return (str);
}
