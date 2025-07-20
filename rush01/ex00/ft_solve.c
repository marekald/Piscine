/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:47:58 by marekald          #+#    #+#             */
/*   Updated: 2025/07/20 14:52:15 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Nos falta comprobar mil cosas, gestionamos que no se repitan en
columnas y filas, pero no tenemos en cuenta las perspectivas para la solución.

int	ft_row_col_valid(char **matrix, char height, int row, int col)
{
	int i;

	i = 0;
	while (matrix[i][col])
	{
		if (i == row)
			i++;
		if (matrix[i][col] == height)
			return (1);
		i++;
	}
	i = 0;
	while (matrix[row][i])
	{
		if (i == col)
			i++;
		if (matrix[row][i] == height)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_valid(char **matrix, int row, int col, int size)
{
	if (matrix[row][col] <= size)
		return (2);
	else
		return (ft_row_col_valid(matrix, matrix[row][col], row, col));
}

int	ft_solve(char **matrix, int size, int row, int col)
{
	int valid;

	valid = ft_is_valid(matrix, row, col, size);
	if (valid == 2)
		return (1);
	else if (valid == 1) // es decir, numero encontrado en otra columna o fila.
	{
		matrix[row][col] = matrix[row][col] + 1;
		ft_solve(matrix, size, row, col);
	}
	if (col == size) // cuando llegue a la última columna vuelve a 0 y row++.
	{
		col = 0;
		row++;
		ft_solve(matrix, size, row, col);
	}
	if (row < size) // cuando llegue a la última fila termina.
	{

	}
	return (0);
} */
