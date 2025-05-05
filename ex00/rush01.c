/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:52:17 by codephenix        #+#    #+#             */
/*   Updated: 2025/05/05 11:44:45 by codephenix       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	ix;
	int	iy;

	ix = 0;
	iy = 0;
	while (ix <= x - 1 && iy <= y - 1)
	{
		if (iy == 0)
		{
			if (ix == 0)
			{
				ft_putchar('/');
			}
			if (ix == (x - 1))
			{
				ft_putchar('\\');
				ft_putchar('\n');
				iy++;
				ix = 0;
			}
			if (ix > 0 && ix < x - 1) 
				ft_putchar('*');
		}
		if (iy > 0 && iy < y - 1)
		{
				if (ix == 0)
					ft_putchar('*');
				if (ix == (x - 1))
				{
					ft_putchar('*');
					ft_putchar('\n');
					iy++;
					ix = -1;
				}
				if (ix > 0 && ix < x - 1) 
					ft_putchar(' ');
		}
		if (iy == y - 1)
		{
			if (ix == 0)
			{
				ft_putchar('\\');
			}
			if (ix == (x - 1))
			{
				ft_putchar('/');
				ft_putchar('\n');
			}
			if (ix > 0 && ix < x - 1) 
				ft_putchar('*');
		}
		ix++;
	}
}
