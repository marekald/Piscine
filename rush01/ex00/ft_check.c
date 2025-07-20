/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:06:41 by ccadavid          #+#    #+#             */
/*   Updated: 2025/07/20 14:34:27 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_get_size(int *size, int len)
{
	int	j;

	j = 0;
	while (j < 10)
	{
		if (j * 4 == (len + 1) / 2)
		{
			*size = j;
			break ;
		}
		j++;
	}
}

int	ft_check_str(char *str, int *size)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		if ((len % 2 == 0) && !(str[len] >= '0' && str[len] <= '9'))
			return (1);
		else if (!(len % 2 == 0) && (str[len] != ' '))
			return (1);
		len++;
	}
	ft_get_size(size, len);
	if ((len != *size * 4 * 2 - 1) && (*size != 1))
		return (1);
	return (len);
}

int	ft_verify_col(int size, char **matrix, int row, int col)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;
	while (col < size && c1 <= 1 && c2 <= 1)
	{
		if (matrix[row][col] == '1')
			c1++;
		if (matrix[row][col] == (size - 2) + '0')
			c2++;
		col++;
	}
	if (c1 > 1 || c2 > 1)
		return (1);
	return (0);
}

int	ft_verify(int size, char **matrix)
{
	int	row;
	int	col;

	row = 0;
	col = 1;
	while (row < size)
	{
		if (ft_verify_col(size, matrix, row, col) == 1)
			return (1);
		row++;
	}
	return (0);
}
