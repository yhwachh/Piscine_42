/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:20:05 by ibalbako          #+#    #+#             */
/*   Updated: 2021/12/01 17:50:31 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = 1;
	if (nb <= 0 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	while (nb >= i)
	{
			result = result * i;
		i++;
	}
	return (result);
}
