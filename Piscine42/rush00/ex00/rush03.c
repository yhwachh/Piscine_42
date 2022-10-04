/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:11:28 by ibalbako          #+#    #+#             */
/*   Updated: 2021/11/14 16:51:37 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void	ligne_de_haut(int x, int y)
{
	int i;

	i = 1;

	while (i <=  y || i <= x)
	{
		if (x >= 1 &&  y >= 1 && i == 1)
			ft_putchar('A');
		else if (x > 1 && i < x && y >= 1)
			ft_putchar('B');
		else if (x == i && x > 1 && y >= 1)
			ft_putchar('C');
		i++;
	}
}

void	ligne_de_milieu(int x, int y)
{
	int i;

	i = 1;

	while (i <=  y || i <= x)
	{
		if ((x >= 1 && y >= 1 && i == 1) || x == i)
			ft_putchar('B');
		else if (x > 1)
			ft_putchar(' ');
		i++;
	}
}

void	ligne_de_bas(int x, int y)
{
	int i;

	i = 1;
	
	while(i <=  y || i <= x)
	{
		if (x >= 1 && y >= 2 && i == 1)
			ft_putchar('A');
		else if (x > 1 && i < x && y > 1)
			ft_putchar('B');
		else if (x == i && x > 1 && y > 1)
			ft_putchar('C');
		i++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 2;
	
	ligne_de_haut(x,y);
	if (x > 0 && y > 0)
		ft_putchar('\n');
	while (i < y && y > 2 && x > 0)
	{
		ligne_de_milieu(x,y);
		ft_putchar('\n');
		i++;
	}
	ligne_de_bas(x,y);
	if (y >= 2 && x > 0)
		ft_putchar('\n');
}
