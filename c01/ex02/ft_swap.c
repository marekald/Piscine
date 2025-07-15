/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:42:35 by marekald          #+#    #+#             */
/*   Updated: 2025/07/15 18:54:44 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a,	int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* #include <stdio.h>
int	main(void)
{
	int	i = 1;
	int	j = 9;

	printf("Antes de ft_swap el valor de 'i' es %d\n", i);
	printf("Antes de ft_swap el valor de 'j' es %d\n", j);
	ft_swap(&i, &j);
	printf("Despues de ft_swap el valor de 'i' es %d\n", i);
	printf("Despues de ft_swap el valor de 'j' es %d\n", j);}
 */