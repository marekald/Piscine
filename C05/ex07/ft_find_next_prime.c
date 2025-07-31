/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:32:23 by marekald          #+#    #+#             */
/*   Updated: 2025/07/30 21:26:45 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			nb = nb + 1;
			i = 2;
		}
		else
			i++;
	}
	return (nb);
}

/* #include <stdio.h>
int	main()
{
	printf("%i\n", ft_find_next_prime(-5));
} */
