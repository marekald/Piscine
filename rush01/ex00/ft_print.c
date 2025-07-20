/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:11:57 by marekald          #+#    #+#             */
/*   Updated: 2025/07/20 14:45:59 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_error(void)
{
	write(2, "ERROR\n", 6);
	return (1);
}

void	ft_print_matrix(char **matrix, int size)
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	while (row < size - 1)
	{
		while (col < size - 1)
		{
			write(1, &matrix[row][col], 1);
			col++;
		}
		write(1, "\n", 1);
		col = 1;
		row++;
	}
}

/* void	ft_print_all(char **matrix, int size)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < size)
	{
		while (col < size)
		{
			write(1, &matrix[row][col], 1);
			col++;
		}
		write(1, "\n", 1);
		col = 0;
		row++;
	}
} */
