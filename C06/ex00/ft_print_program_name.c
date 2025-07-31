/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:40:18 by marekald          #+#    #+#             */
/*   Updated: 2025/07/30 21:44:24 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = -1;
	(void)argc;
	while (argv[0][++i])
		write(1, &argv[0][i], 1);
	write(1, "\n", 1);
}
