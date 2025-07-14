/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:59:16 by marekald          #+#    #+#             */
/*   Updated: 2025/07/14 18:39:51 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int	main(void)
{
	int arr[] = {2, 1, 5, 3, 4};
	int	size = 5;
	int	i = 0;

	ft_sort_int_tab(arr, 3);
	while (size > i)
	{
		printf("%d ", arr[i]);
		i++;
	}
}
