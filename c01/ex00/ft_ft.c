/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:46:00 by marekald          #+#    #+#             */
/*   Updated: 2025/07/13 17:19:03 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
	printf("Antes de ft_ft: n = %d\n", *nbr);
}

#include <stdio.h>
int	main(void)
{
	int n = 1;
	int *nbr = &n;

	printf("Antes de ft_ft: n = %d\n", n);
	ft_ft(nbr);
	printf("Despues de ft_ft: n = %d\n", n);
}
