/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:26:57 by codephenix        #+#    #+#             */
/*   Updated: 2025/04/15 12:21:59 by codephenix       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int ix;
	int iy;

	ix = 0;
	iy = 0;
	while (ix != x - 1 && iy != y - 1)
	{
		while (ix != x - 1 && iy == 0)
		{
			if (ix == 0 && iy == 0)
				ft_putchar('/');

			if (ix == x - 1 && iy == 0)
				ft_putchar(92);
			else
				ft_putchar('*');
			ix++;
		}
		while (ix != x - 1 && iy > y - 1)
		{
			if (ix == 0 && ix == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			ix++;
		}
		while (ix != x - 1 && iy == y - 1)
		{
			if (ix == 0 && iy == y - 1)
				ft_putchar(92);
			if (iy == x - 1 && iy == y - 1)
				ft_putchar('/');
			else
				ft_putchar('*');
			ix++;
		}
		iy++;
	}
}
