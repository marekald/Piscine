/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:03:14 by marekald          #+#    #+#             */
/*   Updated: 2025/07/20 14:28:43 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_calloc(size_t size, size_t size_char)
{
	size_t		row;
	size_t		col;
	char		**matrix;

	row = 0;
	matrix = (char **)malloc(size * size_char);
	if (!matrix)
		return (NULL);
	while (row < size)
	{
		matrix[row] = (char *)malloc((size + 1) * size_char);
		if (!matrix[row])
			return (NULL);
		col = 0;
		while (col < size)
		{
			matrix[row][col] = '0';
			col++;
		}
		matrix[row][col] = '\0';
		row++;
	}
	return (matrix);
}
