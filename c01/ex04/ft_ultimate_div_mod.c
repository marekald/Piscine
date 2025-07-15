/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:18:08 by marekald          #+#    #+#             */
/*   Updated: 2025/07/15 18:54:29 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}

/* #include <stdio.h>
int	main(void)
{
	int	a = 9;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("\nEl resultado de la división es %d\n", a);
	printf("El resultado del resto es %d\n\n", b);
} */
