/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:06:36 by marekald          #+#    #+#             */
/*   Updated: 2025/07/30 21:20:54 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;
	int	p;

	if (power == 0 || nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	p = power;
	n = 1;
	if (p > 1)
		n = ft_recursive_power(nb, p - 1);
	n = n * nb;
	return (n);
}

/* #include <stdio.h>
int	main()
{
	int	n = ft_recursive_power(5, 0);
	printf("%i", n);
} */
