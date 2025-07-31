/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:28:20 by marekald          #+#    #+#             */
/*   Updated: 2025/07/30 21:21:01 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	n = nb;
	if (1 < n)
		n = ft_recursive_factorial(n - 1);
	n = nb * n;
	if (n == 0)
		return (1);
	else if (n < 0)
		return (0);
	else
		return (n);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i = ft_recursive_factorial(-5);
	printf("%i\n", i);
}*/
