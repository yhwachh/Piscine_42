/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:52:06 by ibalbako          #+#    #+#             */
/*   Updated: 2021/11/21 16:06:49 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (i < size)
		{
			dest[j] = src[i];
			j++;
		}
	i++;
	}
	dest[j] = '\0';
	return (i);
}
