/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:18:08 by marekald          #+#    #+#             */
/*   Updated: 2025/07/15 21:02:22 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/* #include <stdio.h>
int	main(void)
{
	int	a = 10;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("\nEl resultado de la división es %d\n", a);
	printf("El resultado del resto es %d\n\n", b);
} */
