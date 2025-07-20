/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:27:02 by marekald          #+#    #+#             */
/*   Updated: 2025/07/20 14:47:35 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_calloc(size_t size, size_t size_char);
int		ft_check_str(char *str, int *size);
void	ft_fill_border(int length, int size, char *str, char **matrix);
int		ft_verify(int size, char **matrix);
int		ft_error(void);

int	main(int argc, char **argv)
{
	int		size;
	int		length;
	char	**matrix;

	size = 0;
	if (argc != 2)
		return (ft_error());
	length = ft_check_str(argv[1], &size);
	if (size == 0 || length == 1)
		return (ft_error());
	matrix = ft_calloc(size + 2, sizeof(char *));
	if (!matrix)
		return (ft_error());
	ft_fill_border(length, size + 2, argv[1], matrix);
	if (ft_verify(size + 2, matrix) == 1)
	{
		free(matrix);
		return (ft_error());
	}
	ft_solve(matrix, size + 2, 0, 0);
	free(matrix);
}
