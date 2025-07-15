/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:07:02 by marekald          #+#    #+#             */
/*   Updated: 2025/07/15 18:54:37 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <stdio.h>
int	main(void)
{
	int	div;
	int mod;

	ft_div_mod(9, 2, &div, &mod);
	printf("\nEl resultado de la división es %d\n", div);
	printf("El resultado del resto es %d\n\n", mod);
} */