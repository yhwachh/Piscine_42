/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:56:11 by ibalbako          #+#    #+#             */
/*   Updated: 2021/12/02 12:07:04 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	range = NULL;
	if (min < max)
	{
		range = (int *)malloc(sizeof(*range) * (max - min));
		if (range == NULL)
			return (NULL);
		while (min < max)
		{
			range[i] = min;
			i++;
			min ++;
		}
	}
	return (range);
}
