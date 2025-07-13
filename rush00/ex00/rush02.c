/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:06:46 by garakizt          #+#    #+#             */
/*   Updated: 2025/07/13 17:43:59 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int y, char edge, char middle)
{
	int	col;

	col = 2;
	ft_putchar(edge);
	while (col < y)
	{
		ft_putchar(middle);
		col++;
	}
	if (y != 1)
		ft_putchar(edge);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (x > 0 && y > 0)
	{
		while (row <= x)
		{
			if (row == 1)
				ft_print_line(y, 'A', 'B');
			else if (row == x)
				ft_print_line(y, 'C', 'B');
			else
				ft_print_line(y, 'B', ' ');
			row++;
		}
	}
	else
		write(1, "Value of 'x' or/and 'y' can't be zero or negative.\n", 51);
}
