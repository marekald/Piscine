/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_border.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:10:54 by ccadavid          #+#    #+#             */
/*   Updated: 2025/07/20 14:42:37 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_change_border_position(int *a, int *b, int size)
{
	int	col;
	int	row;

	col = *a;
	row = *b;
	if (col == size - 1 && row == 0)
	{
		row = size - 1;
		col = 1;
	}
	else if (col == size - 1 && row == size - 1)
	{
		row = 1;
		col = 0;
	}
	else if (row == size - 1 && col == 0)
	{
		row = 1;
		col = size - 1;
	}
	*a = col;
	*b = row;
}

void	ft_fill_border(int length, int size, char *str, char **matrix)
{
	int	i;
	int	col;
	int	row;

	i = 0;
	row = 0;
	col = 1;
	while (i < length)
	{
		if (col < (size - 1) && col != 0)
		{
			matrix[row][col] = str[i];
			col++;
			i = i + 2;
		}
		else if (row < size - 1 && row != 0)
		{
			matrix[row][col] = str[i];
			row++;
			i = i + 2;
		}
		else
			ft_change_border_position(&col, &row, size);
	}
}
