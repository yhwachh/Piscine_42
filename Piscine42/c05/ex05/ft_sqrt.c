/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:25:27 by ibalbako          #+#    #+#             */
/*   Updated: 2021/12/01 18:01:55 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb < 1)
	{
		return (0);
	}
	while (i * i < (unsigned int)nb)
	{
		i++;
	}
	if (i * i == (unsigned int)nb)
	{
		return (i);
	}
	return (0);
}
