/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:44 by marekald          #+#    #+#             */
/*   Updated: 2025/07/29 21:13:59 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	n = nb;
	i = 1;
	while (i < power)
	{
		n = n * nb;
		i++;
	}
	return (n);
}

/*    [1] Power of 0 Expected 1, got 10
  ✓ [2] Power of 1 Expected 2, got 2
    [3] Power of 2 Expected 9, got 6
    [4] Power of a negative number Expected -8, got 0
    [5] Power of a number with a negative power Expected 0, got 2*/

/* #include <stdio.h>
int	main(void)
{
	int n = ft_iterative_power(-3, 2);
	printf("%i", n);
} */
