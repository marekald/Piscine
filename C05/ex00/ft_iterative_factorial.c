/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:16:09 by marekald          #+#    #+#             */
/*   Updated: 2025/07/29 20:50:22 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	if (nb < 0)
		return (0);
	i = 1;
	n = 1;
	while (i <= nb)
	{
		n = n * i;
		i++;
	}
	return (n);
}

/*#include <stdio.h>
int	main(void)
{
	int nb = ft_iterative_factorial(0);
	printf("%i\n", nb);
}*/
